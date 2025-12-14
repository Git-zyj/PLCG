#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55835;
unsigned char var_3 = (unsigned char)4;
int var_5 = -765754918;
unsigned short var_6 = (unsigned short)42722;
unsigned short var_13 = (unsigned short)32898;
unsigned short var_15 = (unsigned short)42976;
int zero = 0;
unsigned short var_17 = (unsigned short)55537;
long long int var_18 = 129577801634833714LL;
long long int var_19 = 8227003554695997041LL;
unsigned int var_20 = 900023506U;
signed char var_21 = (signed char)-90;
unsigned char var_22 = (unsigned char)126;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)76;
short var_25 = (short)-6698;
unsigned int var_26 = 1706485123U;
short var_27 = (short)25128;
long long int arr_0 [18] ;
signed char arr_1 [18] ;
signed char arr_2 [18] ;
unsigned short arr_3 [18] [18] ;
signed char arr_6 [18] ;
unsigned short arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2270309326992636834LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13871;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)52457;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
