#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8324;
unsigned long long int var_8 = 17753274013328414610ULL;
short var_11 = (short)-4062;
unsigned long long int var_13 = 18427492616467051145ULL;
unsigned long long int var_15 = 6382582253424053518ULL;
int zero = 0;
long long int var_19 = 6936954179528511391LL;
unsigned char var_20 = (unsigned char)53;
unsigned char var_21 = (unsigned char)163;
int var_22 = 632237350;
unsigned char var_23 = (unsigned char)45;
unsigned char var_24 = (unsigned char)177;
short var_25 = (short)7781;
short var_26 = (short)28949;
unsigned char arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
unsigned long long int arr_2 [12] [12] [12] ;
long long int arr_3 [12] [12] ;
int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7355927631018959026ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 1445109456207464335LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 541988974;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
