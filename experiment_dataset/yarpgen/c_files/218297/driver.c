#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5195713827355693184ULL;
short var_1 = (short)-2917;
short var_2 = (short)29977;
unsigned short var_3 = (unsigned short)15627;
long long int var_4 = -8446769006874469739LL;
long long int var_5 = 4324267172298512066LL;
unsigned long long int var_6 = 7064896795515208361ULL;
unsigned int var_8 = 1806729455U;
signed char var_11 = (signed char)-67;
unsigned int var_16 = 1006564970U;
unsigned char var_17 = (unsigned char)176;
unsigned char var_18 = (unsigned char)21;
int zero = 0;
long long int var_19 = -1679365785058021679LL;
signed char var_20 = (signed char)99;
unsigned short var_21 = (unsigned short)25962;
short var_22 = (short)1657;
long long int var_23 = 6696121679883133187LL;
unsigned int var_24 = 2909163240U;
unsigned short var_25 = (unsigned short)4373;
unsigned char var_26 = (unsigned char)143;
long long int var_27 = 7537942034374329059LL;
unsigned char arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
unsigned int arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned short arr_5 [18] ;
unsigned char arr_10 [13] ;
signed char arr_12 [13] ;
unsigned int arr_13 [13] ;
unsigned char arr_7 [18] [18] ;
signed char arr_8 [18] ;
long long int arr_9 [18] [18] ;
long long int arr_14 [13] ;
unsigned short arr_17 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3088438924U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2437883101U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2538385334U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)16821;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1273983876U : 1888525321U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)209 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-113 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -4300703935788338088LL : 4052294555503051985LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -1223683666114939305LL : 7668303253088453263LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)19065 : (unsigned short)10341;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
