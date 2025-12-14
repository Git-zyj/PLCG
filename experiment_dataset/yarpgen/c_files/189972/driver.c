#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_3 = (signed char)-57;
short var_4 = (short)10161;
unsigned long long int var_7 = 15336200635384707536ULL;
short var_8 = (short)-8297;
long long int var_10 = -4597194137421850400LL;
unsigned long long int var_12 = 17467221069226933508ULL;
int zero = 0;
signed char var_14 = (signed char)84;
unsigned long long int var_15 = 15193177250503992256ULL;
signed char var_16 = (signed char)-84;
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
