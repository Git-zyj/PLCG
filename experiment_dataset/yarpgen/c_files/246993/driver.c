#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
signed char var_7 = (signed char)50;
short var_9 = (short)-17653;
unsigned short var_15 = (unsigned short)27565;
signed char var_18 = (signed char)20;
signed char var_19 = (signed char)-23;
int zero = 0;
unsigned int var_20 = 740910003U;
unsigned long long int var_21 = 16995603724524453790ULL;
unsigned char var_22 = (unsigned char)74;
long long int var_23 = -1983005077216328933LL;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)23861;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
