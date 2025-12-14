#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5452689221341600278LL;
unsigned short var_9 = (unsigned short)58406;
short var_10 = (short)21611;
unsigned int var_15 = 1855373255U;
int zero = 0;
signed char var_16 = (signed char)-28;
signed char var_17 = (signed char)-5;
short var_18 = (short)3651;
unsigned int var_19 = 2173693108U;
unsigned short arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59796 : (unsigned short)6848;
}

void checksum() {
    hash(&seed, var_16);
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
