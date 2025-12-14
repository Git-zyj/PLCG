#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1736583461;
signed char var_3 = (signed char)72;
signed char var_4 = (signed char)-109;
unsigned short var_5 = (unsigned short)26972;
long long int var_6 = 6436438614150566155LL;
int var_9 = -1656335434;
unsigned long long int var_10 = 17554082793922904124ULL;
int zero = 0;
short var_11 = (short)29079;
unsigned short var_12 = (unsigned short)54714;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)30001;
int var_15 = 1156414820;
unsigned long long int var_16 = 16157824506448295659ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 916895290;
unsigned long long int var_19 = 9249315299334014058ULL;
short var_20 = (short)-25812;
signed char arr_0 [21] ;
signed char arr_1 [21] [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
long long int arr_4 [21] [21] [21] ;
int arr_6 [17] ;
int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11889312167059419161ULL : 13958169184313364036ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -106765267168985777LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -301142481;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -816268316;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
