#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2387890179U;
unsigned int var_1 = 519585389U;
unsigned short var_3 = (unsigned short)15072;
unsigned short var_4 = (unsigned short)47133;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)151;
unsigned int var_7 = 4272587593U;
unsigned char var_8 = (unsigned char)177;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-94;
int zero = 0;
long long int var_11 = -4490970084052476830LL;
unsigned int var_12 = 110107917U;
long long int var_13 = -3200757638393747102LL;
unsigned long long int var_14 = 13829650363584681341ULL;
unsigned int var_15 = 492965689U;
short var_16 = (short)-25785;
unsigned int var_17 = 4282148347U;
short var_18 = (short)-2577;
unsigned int var_19 = 2046737548U;
signed char var_20 = (signed char)-34;
short arr_4 [17] [17] [17] ;
signed char arr_7 [17] [17] ;
unsigned short arr_24 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-23366 : (short)22820;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)97 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61487 : (unsigned short)51337;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
