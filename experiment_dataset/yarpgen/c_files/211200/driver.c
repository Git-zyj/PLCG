#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-83;
unsigned char var_1 = (unsigned char)92;
long long int var_2 = 459175231853329848LL;
unsigned long long int var_3 = 12047295379909610366ULL;
unsigned long long int var_4 = 16221451259888643783ULL;
unsigned short var_5 = (unsigned short)39134;
unsigned long long int var_6 = 8610863924267854716ULL;
unsigned long long int var_7 = 927885152389009900ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_10 = -1906011603;
unsigned long long int var_11 = 12288253181485787404ULL;
short var_12 = (short)23588;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1711666929U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)925;
unsigned int var_17 = 1062516695U;
unsigned long long int var_18 = 12064949899658614179ULL;
signed char var_19 = (signed char)111;
short var_20 = (short)7869;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10204194005606273011ULL;
unsigned long long int var_23 = 16318915717374683437ULL;
unsigned long long int var_24 = 17849687984998008097ULL;
unsigned char var_25 = (unsigned char)169;
signed char var_26 = (signed char)25;
unsigned long long int var_27 = 10938052676382780464ULL;
unsigned short var_28 = (unsigned short)17324;
short var_29 = (short)-10277;
unsigned short var_30 = (unsigned short)29396;
_Bool var_31 = (_Bool)0;
int var_32 = -1815089663;
short var_33 = (short)-27339;
unsigned char var_34 = (unsigned char)54;
unsigned char var_35 = (unsigned char)225;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)20;
unsigned short var_38 = (unsigned short)45893;
signed char arr_2 [25] ;
signed char arr_18 [25] [25] ;
_Bool arr_26 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-4 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
