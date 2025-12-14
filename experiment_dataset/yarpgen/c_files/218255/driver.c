#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7764104894954742137LL;
unsigned short var_1 = (unsigned short)26719;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6924037308850598329LL;
unsigned char var_6 = (unsigned char)45;
unsigned short var_8 = (unsigned short)32061;
signed char var_9 = (signed char)4;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_19 = 1980533242;
long long int var_20 = 4600618182979265854LL;
unsigned int var_21 = 1867075684U;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)37785;
long long int var_24 = -1604222742692962155LL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_2 [25] ;
long long int arr_3 [25] [25] ;
_Bool arr_4 [25] [25] [25] [25] ;
long long int arr_5 [25] ;
unsigned long long int arr_6 [25] [25] ;
long long int arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 883221746128980922ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 5096377042823387422ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -3856695589194529608LL : 4102561098095117995LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6193471661169280364LL : 6763660875445721063LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 10434708242612447893ULL : 15800497297838013145ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1593921071447843238LL : 7459899496009765609LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
