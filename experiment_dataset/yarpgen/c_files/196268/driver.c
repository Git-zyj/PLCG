#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 151705188;
signed char var_1 = (signed char)-8;
unsigned char var_4 = (unsigned char)240;
unsigned long long int var_5 = 10495607841869273166ULL;
unsigned char var_6 = (unsigned char)128;
long long int var_12 = 2946201255819131701LL;
long long int var_15 = -1014325298674377813LL;
int zero = 0;
short var_17 = (short)18125;
int var_18 = -1954648343;
unsigned long long int var_19 = 10193858992753029959ULL;
int var_20 = 307818635;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
