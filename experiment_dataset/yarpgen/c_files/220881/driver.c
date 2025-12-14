#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5161945495943711455LL;
_Bool var_1 = (_Bool)1;
int var_2 = 1635776730;
unsigned long long int var_3 = 7795552297145192374ULL;
unsigned short var_4 = (unsigned short)65055;
unsigned int var_5 = 718271776U;
long long int var_6 = 8287988170935148551LL;
long long int var_7 = 5025087801668953550LL;
int var_8 = 1750949403;
short var_9 = (short)22042;
unsigned long long int var_11 = 8661850313641505995ULL;
long long int var_12 = -6982683901886002235LL;
unsigned short var_13 = (unsigned short)7719;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)255;
int var_16 = 1228505860;
_Bool var_17 = (_Bool)0;
int var_18 = 527128187;
short var_19 = (short)-23570;
unsigned short var_20 = (unsigned short)35710;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [24] [24] ;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23957;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
