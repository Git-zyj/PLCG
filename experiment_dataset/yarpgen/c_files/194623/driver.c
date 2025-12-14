#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8535;
signed char var_4 = (signed char)-4;
unsigned int var_5 = 519919869U;
unsigned long long int var_8 = 6830623490481808605ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1007589104U;
int zero = 0;
unsigned short var_15 = (unsigned short)3403;
unsigned char var_16 = (unsigned char)59;
unsigned short var_17 = (unsigned short)23774;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
