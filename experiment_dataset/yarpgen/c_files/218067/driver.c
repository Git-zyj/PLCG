#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 5969902378074609785LL;
long long int var_4 = -633719999571782460LL;
short var_5 = (short)-23526;
long long int var_7 = -6469082649668066931LL;
int var_9 = -487711053;
unsigned char var_10 = (unsigned char)31;
signed char var_11 = (signed char)15;
short var_12 = (short)-5730;
unsigned short var_13 = (unsigned short)25204;
int zero = 0;
long long int var_14 = 1899370441189571707LL;
unsigned short var_15 = (unsigned short)26536;
unsigned char var_16 = (unsigned char)17;
short var_17 = (short)-7390;
long long int var_18 = 5905890360704486443LL;
short var_19 = (short)-21040;
unsigned short arr_0 [18] ;
long long int arr_1 [18] ;
long long int arr_2 [18] ;
signed char arr_3 [18] ;
long long int arr_7 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] ;
long long int arr_10 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)58330;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 84011461165736440LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 8554508634766671082LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5191643297793753259LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3975753022U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -4246745736325391368LL;
}

void checksum() {
    hash(&seed, var_14);
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
