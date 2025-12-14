#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)176;
unsigned int var_3 = 1451894233U;
short var_7 = (short)-2530;
short var_10 = (short)-11712;
int zero = 0;
unsigned long long int var_17 = 408148620969082044ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16623556622438521413ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
