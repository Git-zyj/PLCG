#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44000;
int var_2 = -1686492349;
long long int var_3 = -6988440093209072829LL;
unsigned int var_4 = 3292740084U;
int var_7 = -409497164;
_Bool var_9 = (_Bool)1;
long long int var_10 = 2393366410968633401LL;
int zero = 0;
unsigned int var_11 = 177793154U;
unsigned short var_12 = (unsigned short)37454;
signed char var_13 = (signed char)-18;
short var_14 = (short)19858;
long long int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2047106066762488807LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
