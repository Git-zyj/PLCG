#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
signed char var_3 = (signed char)-100;
int var_5 = 834284620;
unsigned short var_6 = (unsigned short)32766;
unsigned int var_7 = 983063339U;
unsigned short var_9 = (unsigned short)39024;
int zero = 0;
unsigned long long int var_11 = 14982376141458241694ULL;
unsigned short var_12 = (unsigned short)20342;
int var_13 = -647992886;
unsigned char var_14 = (unsigned char)218;
unsigned short var_15 = (unsigned short)53524;
unsigned short var_16 = (unsigned short)41481;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1389578639;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
