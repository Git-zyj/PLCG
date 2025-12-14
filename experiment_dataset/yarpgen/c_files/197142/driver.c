#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-73;
short var_5 = (short)-17099;
short var_6 = (short)-4082;
unsigned short var_9 = (unsigned short)6884;
unsigned int var_11 = 1370340888U;
long long int var_12 = 6536274067764718613LL;
unsigned short var_13 = (unsigned short)52976;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)36952;
_Bool var_16 = (_Bool)1;
short var_17 = (short)4265;
long long int var_18 = 6374817041422198358LL;
int var_19 = 578330615;
int var_20 = -1441355075;
int var_21 = 1735344616;
signed char var_22 = (signed char)-80;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-7;
short var_25 = (short)5174;
_Bool arr_1 [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
int arr_9 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)101 : (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -45158362;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
