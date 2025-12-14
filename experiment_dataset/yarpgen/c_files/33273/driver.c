#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -497406465;
long long int var_1 = -1992411557479392612LL;
unsigned char var_2 = (unsigned char)186;
unsigned int var_4 = 1130622096U;
_Bool var_5 = (_Bool)1;
int var_6 = -746468690;
int var_7 = 179114126;
unsigned long long int var_8 = 14695889421651528480ULL;
int zero = 0;
short var_10 = (short)8108;
unsigned char var_11 = (unsigned char)253;
long long int var_12 = 8688058578089141775LL;
long long int var_13 = -1616325061754488120LL;
unsigned int var_14 = 1542770470U;
unsigned char var_15 = (unsigned char)1;
long long int arr_2 [10] [10] [10] ;
unsigned int arr_3 [10] ;
unsigned short arr_6 [10] ;
signed char arr_9 [10] [10] [10] [10] [10] ;
unsigned long long int arr_12 [11] ;
unsigned int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5353414305323122361LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1587204227U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)8055;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 13154182882200934384ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 3457752795U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
