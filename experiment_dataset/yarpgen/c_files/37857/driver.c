#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_12 = -8333151414000896250LL;
unsigned int var_13 = 730718815U;
_Bool var_14 = (_Bool)1;
int var_15 = 925850890;
int var_16 = -1738711616;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8785008377562678748LL;
unsigned char var_19 = (unsigned char)183;
signed char var_20 = (signed char)-106;
int var_21 = 283829336;
unsigned char var_22 = (unsigned char)33;
signed char var_23 = (signed char)-57;
long long int var_24 = 3004466623441448136LL;
long long int var_25 = 5998160890110871050LL;
long long int var_26 = -8980998583979372493LL;
short var_27 = (short)22615;
long long int var_28 = -8605374526411815744LL;
short var_29 = (short)-19380;
unsigned int var_30 = 1871754355U;
unsigned long long int arr_13 [10] [10] [10] ;
long long int arr_16 [16] ;
_Bool arr_27 [10] ;
unsigned char arr_33 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12234247992048801510ULL : 16146802323600505201ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -7978820891655653351LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
