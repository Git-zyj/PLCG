#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10876682355406785785ULL;
signed char var_3 = (signed char)123;
unsigned int var_10 = 2500530284U;
unsigned char var_11 = (unsigned char)18;
int zero = 0;
int var_16 = -1986963236;
signed char var_17 = (signed char)-47;
int var_18 = 457783254;
signed char var_19 = (signed char)112;
signed char var_20 = (signed char)-125;
int var_21 = 1971541501;
short var_22 = (short)25785;
unsigned char var_23 = (unsigned char)73;
unsigned short var_24 = (unsigned short)26364;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-35;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_4 [23] ;
_Bool arr_5 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 2287899568271701751ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 11249739647892502417ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
