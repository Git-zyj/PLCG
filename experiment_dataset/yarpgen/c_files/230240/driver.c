#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25256;
short var_3 = (short)3416;
long long int var_4 = 8638608083679024790LL;
int var_6 = 317765160;
unsigned long long int var_9 = 3508257896313591380ULL;
unsigned long long int var_10 = 709861021517266588ULL;
unsigned short var_12 = (unsigned short)58547;
unsigned short var_13 = (unsigned short)10060;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9010924588518924263ULL;
unsigned short var_17 = (unsigned short)44623;
unsigned int var_18 = 3750541707U;
_Bool var_19 = (_Bool)0;
int arr_2 [15] ;
int arr_3 [15] ;
signed char arr_5 [15] ;
short arr_6 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -2088274333;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1097179554;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)22927 : (short)-9713;
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
