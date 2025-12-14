#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7508691028661661249LL;
unsigned long long int var_1 = 8971119651458186774ULL;
unsigned short var_2 = (unsigned short)45041;
int var_4 = 1966049822;
unsigned long long int var_5 = 7051342946988028835ULL;
signed char var_6 = (signed char)-17;
unsigned long long int var_8 = 12637943156616818242ULL;
long long int var_9 = -1415953555166252702LL;
short var_10 = (short)26851;
signed char var_11 = (signed char)20;
unsigned long long int var_12 = 11547799043868537949ULL;
unsigned char var_13 = (unsigned char)97;
int zero = 0;
unsigned long long int var_15 = 17530182306598504822ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-60;
unsigned int var_18 = 1841857242U;
signed char var_19 = (signed char)58;
int var_20 = -308015619;
signed char var_21 = (signed char)-37;
unsigned int var_22 = 4214023678U;
unsigned int arr_0 [14] [14] ;
short arr_1 [14] ;
signed char arr_2 [14] ;
short arr_3 [22] ;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2419817356U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)22073;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-6410 : (short)11297;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2342173983U : 4247653595U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
