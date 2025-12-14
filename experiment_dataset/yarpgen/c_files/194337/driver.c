#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16977841861860627389ULL;
unsigned short var_1 = (unsigned short)63337;
unsigned short var_3 = (unsigned short)2030;
signed char var_4 = (signed char)-63;
signed char var_5 = (signed char)-59;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2105578503U;
int zero = 0;
unsigned int var_10 = 656945021U;
signed char var_11 = (signed char)90;
signed char var_12 = (signed char)-72;
unsigned short var_13 = (unsigned short)34693;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
