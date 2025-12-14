#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned long long int var_1 = 6782111193955438238ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 18139770564273893330ULL;
signed char var_4 = (signed char)-98;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)5;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)169;
unsigned int var_11 = 2696045781U;
unsigned char var_12 = (unsigned char)177;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)89;
unsigned int var_15 = 2087675763U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12143824629365649364ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)3;
_Bool var_20 = (_Bool)1;
short var_21 = (short)29732;
signed char var_22 = (signed char)-74;
long long int var_23 = -5624725968097400400LL;
unsigned char var_24 = (unsigned char)180;
short var_25 = (short)1061;
long long int var_26 = -4107905626886893735LL;
unsigned long long int var_27 = 1863419510026002046ULL;
unsigned long long int var_28 = 9648753915300484072ULL;
unsigned long long int var_29 = 11479266119410131631ULL;
long long int var_30 = 9160936210266424415LL;
signed char var_31 = (signed char)-77;
short var_32 = (short)7717;
unsigned int var_33 = 3123630102U;
short var_34 = (short)-6396;
unsigned short arr_6 [11] [11] [11] [11] ;
unsigned char arr_27 [22] [22] [22] [22] [22] ;
unsigned short arr_33 [22] [22] ;
unsigned short arr_38 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)20218 : (unsigned short)56100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)244 : (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)3073;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)12523;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
