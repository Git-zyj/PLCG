#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-32637;
unsigned int var_3 = 1113284201U;
unsigned int var_5 = 1006893227U;
short var_7 = (short)-18572;
signed char var_9 = (signed char)-103;
unsigned short var_10 = (unsigned short)37270;
long long int var_11 = 4876414509728536346LL;
signed char var_13 = (signed char)-15;
short var_15 = (short)-5812;
int zero = 0;
signed char var_16 = (signed char)-24;
unsigned int var_17 = 2037039899U;
unsigned int var_18 = 4034945588U;
signed char var_19 = (signed char)84;
unsigned long long int var_20 = 16123790338121482783ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
