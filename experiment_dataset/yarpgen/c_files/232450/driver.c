#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
signed char var_1 = (signed char)-20;
int var_2 = 1312965153;
signed char var_3 = (signed char)-22;
unsigned int var_6 = 2265660551U;
short var_7 = (short)19357;
unsigned char var_8 = (unsigned char)236;
int var_9 = -1471107269;
unsigned char var_10 = (unsigned char)89;
signed char var_12 = (signed char)-40;
short var_13 = (short)-13892;
int zero = 0;
int var_14 = -1802480689;
int var_15 = -1147913877;
unsigned long long int var_16 = 11137214451973655020ULL;
unsigned int var_17 = 1139677006U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-118;
unsigned long long int var_20 = 12046934631765535522ULL;
short var_21 = (short)22139;
unsigned int var_22 = 1804626409U;
int var_23 = 1614467546;
short var_24 = (short)-11624;
unsigned int var_25 = 729744884U;
signed char arr_0 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -34407435438521058LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 14786182823058665789ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
