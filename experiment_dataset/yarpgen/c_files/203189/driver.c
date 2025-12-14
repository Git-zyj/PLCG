#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
short var_1 = (short)10022;
short var_9 = (short)-11296;
long long int var_14 = -4411117344040659113LL;
short var_17 = (short)31498;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
unsigned char var_20 = (unsigned char)98;
long long int var_21 = 6832622892592875270LL;
signed char var_22 = (signed char)106;
unsigned short var_23 = (unsigned short)17081;
signed char var_24 = (signed char)62;
unsigned short var_25 = (unsigned short)53196;
long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
long long int arr_2 [19] [19] ;
short arr_3 [19] [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -8073977678021913110LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)49988;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -5867657241667681188LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-13899;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8163990465420064458ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
