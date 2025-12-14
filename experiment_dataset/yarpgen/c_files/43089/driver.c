#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
short var_2 = (short)9919;
unsigned int var_3 = 1207564003U;
_Bool var_7 = (_Bool)1;
int var_9 = 1077012643;
signed char var_10 = (signed char)-32;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)20;
unsigned char var_15 = (unsigned char)62;
unsigned long long int var_16 = 9462904469436895036ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)39620;
unsigned short var_18 = (unsigned short)22996;
long long int var_19 = 1455807321819876250LL;
short var_20 = (short)5457;
unsigned int var_21 = 3909860703U;
_Bool var_22 = (_Bool)1;
unsigned short arr_7 [25] [25] ;
unsigned short arr_10 [17] ;
unsigned long long int arr_11 [17] ;
unsigned short arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)49234 : (unsigned short)23842;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)4261;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 3781023928487601975ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (unsigned short)37901;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
