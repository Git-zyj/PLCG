#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
long long int var_3 = 5978853640239661664LL;
short var_7 = (short)1560;
signed char var_8 = (signed char)-35;
int var_9 = -1107402939;
signed char var_10 = (signed char)-105;
long long int var_12 = -216308101940803511LL;
int zero = 0;
long long int var_13 = 1134916966332432357LL;
signed char var_14 = (signed char)-53;
short var_15 = (short)-32231;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
