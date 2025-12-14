#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31267;
signed char var_8 = (signed char)97;
unsigned short var_13 = (unsigned short)30441;
signed char var_15 = (signed char)36;
int zero = 0;
short var_18 = (short)22543;
unsigned int var_19 = 911057154U;
unsigned short var_20 = (unsigned short)52138;
signed char var_21 = (signed char)27;
signed char var_22 = (signed char)40;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)39907;
unsigned long long int var_26 = 5007016415448798267ULL;
signed char arr_1 [18] ;
int arr_2 [18] ;
unsigned char arr_3 [25] ;
long long int arr_4 [25] [25] ;
unsigned short arr_9 [19] [19] ;
int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1408321111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)38 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 362070550784070173LL : -7136817487000846682LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)343;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -1489501519;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
