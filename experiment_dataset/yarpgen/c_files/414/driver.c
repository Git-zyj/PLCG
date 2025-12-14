#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45358;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-27689;
signed char var_15 = (signed char)-42;
short var_16 = (short)-232;
int zero = 0;
signed char var_19 = (signed char)-86;
signed char var_20 = (signed char)-33;
unsigned short var_21 = (unsigned short)32937;
signed char var_22 = (signed char)-54;
signed char var_23 = (signed char)127;
unsigned short var_24 = (unsigned short)56838;
short var_25 = (short)-12931;
unsigned int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2459756542U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
