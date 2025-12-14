#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7545561280204646294LL;
unsigned char var_2 = (unsigned char)242;
unsigned long long int var_3 = 682500693774341634ULL;
int var_4 = 142621264;
_Bool var_7 = (_Bool)1;
int var_8 = -1604632994;
short var_10 = (short)-3493;
unsigned char var_14 = (unsigned char)1;
int var_16 = -1863557439;
int zero = 0;
int var_18 = 696692016;
short var_19 = (short)-6087;
unsigned char var_20 = (unsigned char)90;
short var_21 = (short)13478;
unsigned int var_22 = 1423121218U;
unsigned int arr_0 [25] ;
long long int arr_3 [25] [25] ;
int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2771782871U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 123075087670398740LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 272888208;
}

void checksum() {
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
