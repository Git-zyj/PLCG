#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned long long int var_4 = 794170340584904601ULL;
short var_5 = (short)12796;
unsigned long long int var_11 = 9940948054098968834ULL;
signed char var_13 = (signed char)108;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)29419;
signed char var_17 = (signed char)-15;
unsigned short var_18 = (unsigned short)57715;
unsigned long long int var_19 = 18426856015986936338ULL;
unsigned int arr_3 [22] [22] [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1085966600U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 711415376;
}

void checksum() {
    hash(&seed, var_15);
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
