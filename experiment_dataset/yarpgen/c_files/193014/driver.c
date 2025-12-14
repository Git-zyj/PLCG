#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54088;
unsigned short var_2 = (unsigned short)26662;
unsigned int var_5 = 2850391459U;
unsigned short var_6 = (unsigned short)7929;
unsigned long long int var_7 = 10339701600544291112ULL;
long long int var_8 = 7037460244805847912LL;
long long int var_9 = 5678961422269671834LL;
int zero = 0;
unsigned short var_13 = (unsigned short)64090;
unsigned char var_14 = (unsigned char)40;
unsigned int var_15 = 741746554U;
unsigned short var_16 = (unsigned short)16966;
long long int var_17 = -66515097506811013LL;
unsigned short var_18 = (unsigned short)22073;
short var_19 = (short)-4028;
unsigned int var_20 = 927946051U;
short var_21 = (short)7914;
long long int var_22 = 7071858546157927513LL;
unsigned int var_23 = 266454453U;
unsigned long long int arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
unsigned char arr_2 [18] ;
unsigned char arr_13 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3644717861165324666ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58339;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)8;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
