#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3525;
unsigned char var_5 = (unsigned char)10;
_Bool var_6 = (_Bool)1;
long long int var_7 = 3505956901826785309LL;
unsigned int var_8 = 3477151721U;
signed char var_9 = (signed char)43;
int zero = 0;
unsigned long long int var_12 = 15585148490143533842ULL;
unsigned long long int var_13 = 9405209186113458542ULL;
signed char var_14 = (signed char)100;
signed char var_15 = (signed char)102;
signed char var_16 = (signed char)72;
long long int arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 5793129942650243089LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
