#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 665763704;
signed char var_2 = (signed char)-111;
unsigned long long int var_3 = 8882066859851139610ULL;
int var_4 = -1320594148;
unsigned char var_5 = (unsigned char)173;
unsigned int var_7 = 2571983723U;
int var_8 = -586107775;
int var_9 = 2137062417;
int zero = 0;
unsigned long long int var_10 = 5925983456077445864ULL;
signed char var_11 = (signed char)-118;
unsigned int var_12 = 988445559U;
long long int var_13 = 1371949592386083022LL;
unsigned short arr_8 [17] ;
unsigned int arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38173 : (unsigned short)2469;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1992746196U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
