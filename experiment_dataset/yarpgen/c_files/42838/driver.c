#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)10;
unsigned int var_6 = 1158319646U;
long long int var_9 = 9054793026465817936LL;
int zero = 0;
long long int var_18 = 7738180781506165436LL;
unsigned char var_19 = (unsigned char)50;
unsigned char var_20 = (unsigned char)80;
signed char var_21 = (signed char)-4;
unsigned short var_22 = (unsigned short)60682;
signed char var_23 = (signed char)42;
signed char var_24 = (signed char)95;
unsigned long long int var_25 = 16016182640345439622ULL;
long long int var_26 = -1479032572551076856LL;
signed char var_27 = (signed char)60;
unsigned short var_28 = (unsigned short)57769;
long long int arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
signed char arr_3 [11] ;
_Bool arr_6 [11] [11] ;
signed char arr_12 [11] [11] [11] [11] ;
signed char arr_14 [14] ;
unsigned char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 475368859356784973LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
