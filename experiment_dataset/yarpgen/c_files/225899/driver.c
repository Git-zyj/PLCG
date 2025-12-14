#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36439;
long long int var_5 = 3144629122683217669LL;
_Bool var_7 = (_Bool)1;
int var_10 = 562461041;
int var_15 = 1496995625;
int zero = 0;
long long int var_18 = -7809445988912329993LL;
int var_19 = 2110183380;
unsigned char var_20 = (unsigned char)234;
unsigned short var_21 = (unsigned short)39925;
unsigned long long int var_22 = 10357142113927349947ULL;
long long int var_23 = 6805075672288981106LL;
int var_24 = 1350444609;
unsigned char var_25 = (unsigned char)38;
short var_26 = (short)11752;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
_Bool arr_3 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 2281668876891253818LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -7028182333442877232LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
