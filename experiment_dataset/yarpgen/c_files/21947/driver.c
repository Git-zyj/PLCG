#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63387;
short var_3 = (short)-26714;
short var_4 = (short)27429;
int var_5 = -2068930437;
unsigned char var_6 = (unsigned char)208;
unsigned int var_8 = 3159626556U;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
long long int var_10 = 5873002059161385583LL;
unsigned char var_11 = (unsigned char)201;
signed char var_12 = (signed char)37;
signed char var_13 = (signed char)89;
long long int arr_0 [23] ;
short arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -4556425241707264505LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)30685;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
