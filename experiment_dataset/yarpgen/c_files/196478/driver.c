#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5893605480204405067LL;
unsigned char var_1 = (unsigned char)95;
long long int var_2 = -8260545853018543101LL;
long long int var_5 = 8283615526267796230LL;
long long int var_6 = -4321144928408621335LL;
long long int var_7 = -4744087787597161563LL;
long long int var_8 = -5713047937515629126LL;
long long int var_10 = 570571405523486132LL;
long long int var_11 = -87758182182923936LL;
unsigned char var_13 = (unsigned char)57;
unsigned char var_14 = (unsigned char)220;
unsigned char var_15 = (unsigned char)237;
long long int var_16 = -4020217309045524994LL;
long long int var_17 = -3479191744560159143LL;
int zero = 0;
long long int var_19 = -2291225231500401982LL;
unsigned char var_20 = (unsigned char)126;
long long int var_21 = -371094080388937184LL;
long long int var_22 = -6341004364493585598LL;
long long int var_23 = -7112785281243267250LL;
unsigned char var_24 = (unsigned char)25;
unsigned char var_25 = (unsigned char)143;
unsigned char var_26 = (unsigned char)50;
unsigned char var_27 = (unsigned char)42;
long long int var_28 = 3382725709416807783LL;
long long int var_29 = -7122098529716784484LL;
unsigned char var_30 = (unsigned char)159;
unsigned char var_31 = (unsigned char)11;
long long int var_32 = -907714195978000201LL;
long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_3 [10] ;
unsigned char arr_5 [10] ;
long long int arr_8 [19] ;
long long int arr_6 [10] ;
unsigned char arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -3427860516578584776LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -8725440047089026316LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -3134760834525595042LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)137;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
