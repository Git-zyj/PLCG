#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1714076891U;
unsigned long long int var_4 = 4751973674095025759ULL;
unsigned long long int var_7 = 3972765202460467901ULL;
signed char var_8 = (signed char)-85;
unsigned long long int var_9 = 5565788586459119826ULL;
signed char var_10 = (signed char)108;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)150;
_Bool var_13 = (_Bool)0;
short var_14 = (short)26772;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)61;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)33885;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1395213987U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)163;
signed char var_24 = (signed char)45;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-98;
_Bool var_27 = (_Bool)1;
unsigned char arr_0 [22] ;
_Bool arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
signed char arr_6 [22] [22] ;
signed char arr_3 [22] ;
int arr_7 [22] ;
signed char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 10039871694730849309ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 916141191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)45;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
