#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
short var_1 = (short)-9621;
_Bool var_4 = (_Bool)1;
int var_6 = 1737084772;
unsigned long long int var_8 = 2409995479725702743ULL;
unsigned char var_9 = (unsigned char)250;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)34722;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6334285146594359194ULL;
int var_17 = 713346372;
unsigned char var_18 = (unsigned char)100;
unsigned long long int var_19 = 13310894613259137533ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14907210384658118721ULL;
unsigned char arr_0 [11] ;
_Bool arr_1 [11] ;
unsigned long long int arr_7 [11] [11] ;
int arr_8 [11] [11] [11] ;
unsigned char arr_9 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 11283368590926387451ULL : 4430139357759547848ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -566113880;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
