#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11536950709099452019ULL;
unsigned int var_1 = 2050984137U;
unsigned int var_2 = 3773865963U;
short var_3 = (short)-17282;
long long int var_4 = -3004162184443104870LL;
signed char var_5 = (signed char)-35;
signed char var_6 = (signed char)-48;
unsigned int var_7 = 583400651U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 1593534180U;
long long int var_16 = 7671798490392890266LL;
signed char var_17 = (signed char)107;
long long int var_18 = -7206458185023671547LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
