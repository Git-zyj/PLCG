#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27716;
unsigned short var_6 = (unsigned short)11349;
unsigned char var_8 = (unsigned char)15;
unsigned char var_12 = (unsigned char)255;
long long int var_18 = 3219488089822798523LL;
int zero = 0;
short var_20 = (short)7234;
unsigned int var_21 = 2989776429U;
int var_22 = -1992902062;
short var_23 = (short)3633;
unsigned short var_24 = (unsigned short)37134;
short var_25 = (short)-25980;
long long int var_26 = 5384214764515445951LL;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 3771682364796527378ULL;
long long int var_29 = 3881018379633617095LL;
long long int var_30 = 806525259985744395LL;
short var_31 = (short)-27005;
signed char var_32 = (signed char)-117;
unsigned long long int var_33 = 11568337740667423629ULL;
unsigned int var_34 = 2200962800U;
unsigned short var_35 = (unsigned short)5160;
unsigned long long int var_36 = 2727491587264597953ULL;
unsigned short var_37 = (unsigned short)54998;
unsigned long long int arr_8 [13] ;
int arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 11209189928449742931ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 806856364 : 716681673;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
