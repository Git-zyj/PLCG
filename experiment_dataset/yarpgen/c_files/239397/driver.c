#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2054054037U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)99;
unsigned long long int var_7 = 11521410751903429419ULL;
unsigned char var_8 = (unsigned char)94;
signed char var_10 = (signed char)-28;
unsigned long long int var_11 = 13973281840882965300ULL;
unsigned int var_12 = 2505976087U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-19461;
signed char var_16 = (signed char)-98;
long long int var_17 = 5012412195807934574LL;
unsigned long long int var_18 = 18241186324772631818ULL;
_Bool var_19 = (_Bool)1;
int arr_0 [15] ;
unsigned long long int arr_3 [15] ;
unsigned long long int arr_4 [15] [15] [15] ;
unsigned long long int arr_6 [15] ;
unsigned int arr_8 [15] ;
unsigned int arr_9 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -344146009;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 24593797480242106ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10498940478504423801ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 10005976258872634082ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1214594901U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2004198027U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
