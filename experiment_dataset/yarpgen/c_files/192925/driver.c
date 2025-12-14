#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4912266275720781252LL;
signed char var_4 = (signed char)-46;
unsigned long long int var_5 = 8339755787641056730ULL;
unsigned char var_9 = (unsigned char)56;
unsigned long long int var_10 = 5143995607698977006ULL;
unsigned long long int var_11 = 2634679649721265093ULL;
unsigned char var_12 = (unsigned char)170;
unsigned long long int var_14 = 498481006247607752ULL;
unsigned int var_15 = 240981418U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3156074735363949359LL;
unsigned short var_18 = (unsigned short)40759;
unsigned char var_19 = (unsigned char)100;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-89;
int var_22 = 1646648054;
unsigned long long int arr_0 [11] [11] ;
short arr_4 [11] ;
unsigned long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 6716478577789632860ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)9378 : (short)-7602;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 6347053537900962152ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
