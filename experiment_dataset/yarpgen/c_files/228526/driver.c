#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
long long int var_3 = 3477447250332831842LL;
signed char var_4 = (signed char)12;
int zero = 0;
unsigned short var_14 = (unsigned short)40617;
unsigned long long int var_15 = 8055146247105729572ULL;
long long int var_16 = -3458466319007767302LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
