#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
unsigned short var_2 = (unsigned short)51685;
int var_4 = 190121875;
long long int var_5 = -4883583690608047247LL;
unsigned short var_6 = (unsigned short)44369;
int var_8 = -1763991264;
int var_9 = 2142982565;
long long int var_10 = 7550766066591228079LL;
unsigned long long int var_13 = 5182047774393540599ULL;
int var_15 = 686222475;
long long int var_16 = -8793432448445646932LL;
int var_17 = -415375918;
unsigned short var_18 = (unsigned short)44230;
int zero = 0;
unsigned short var_19 = (unsigned short)10504;
int var_20 = 26866173;
int var_21 = -89427155;
unsigned long long int var_22 = 15776235618511164671ULL;
unsigned char var_23 = (unsigned char)60;
unsigned char arr_0 [25] ;
unsigned char arr_2 [25] [25] ;
long long int arr_5 [25] [25] ;
int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -4138200570289384652LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 716915447 : 1835489727;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
