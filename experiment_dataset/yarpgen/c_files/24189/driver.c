#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3640714788U;
unsigned short var_2 = (unsigned short)46950;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)171;
long long int var_5 = -1502108015140500935LL;
long long int var_6 = -7978395650100356288LL;
signed char var_7 = (signed char)120;
unsigned long long int var_9 = 10172261368262561063ULL;
short var_10 = (short)-25161;
long long int var_11 = -8535976818402783463LL;
int var_12 = 2042077279;
int zero = 0;
unsigned int var_13 = 2105100061U;
long long int var_14 = -4764922320127698127LL;
unsigned long long int var_15 = 12224633478967891769ULL;
signed char var_16 = (signed char)66;
short var_17 = (short)-10656;
signed char var_18 = (signed char)-28;
unsigned long long int var_19 = 5454106010954614172ULL;
unsigned long long int var_20 = 11937109459345299693ULL;
int var_21 = -1497986366;
short var_22 = (short)-18326;
unsigned long long int var_23 = 13482099228520210489ULL;
long long int arr_3 [22] ;
long long int arr_6 [23] ;
unsigned long long int arr_7 [23] ;
unsigned char arr_8 [23] ;
unsigned int arr_10 [23] [23] ;
unsigned long long int arr_12 [23] [23] [23] ;
unsigned int arr_13 [23] ;
unsigned short arr_15 [23] [23] [23] ;
unsigned short arr_20 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -6569114132812020302LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 4809447511230154000LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 12756362073345291541ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 3148807836U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1540398266113488858ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 3904332496U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)15970;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4922;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
