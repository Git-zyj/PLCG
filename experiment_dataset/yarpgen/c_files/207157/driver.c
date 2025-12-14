#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3050631733045538466LL;
int var_4 = -993238433;
unsigned short var_8 = (unsigned short)44851;
unsigned int var_9 = 3526965208U;
unsigned long long int var_10 = 2937472278480539042ULL;
int zero = 0;
signed char var_15 = (signed char)-4;
int var_16 = 1700669562;
unsigned int var_17 = 1105824758U;
unsigned short arr_2 [22] ;
unsigned char arr_3 [10] ;
long long int arr_5 [10] [10] ;
signed char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15085 : (unsigned short)52522;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -8792140133036945067LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
