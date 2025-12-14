#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38508;
signed char var_1 = (signed char)79;
unsigned char var_2 = (unsigned char)11;
unsigned short var_3 = (unsigned short)7310;
unsigned char var_4 = (unsigned char)30;
unsigned int var_5 = 874915935U;
short var_6 = (short)-16641;
unsigned long long int var_7 = 1172748681000017338ULL;
long long int var_8 = -7036530503057059183LL;
long long int var_9 = 7229994523288903601LL;
signed char var_10 = (signed char)-81;
unsigned long long int var_11 = 17770401518908574231ULL;
unsigned char var_12 = (unsigned char)174;
unsigned int var_13 = 3499560992U;
short var_14 = (short)-10855;
unsigned char var_15 = (unsigned char)246;
unsigned long long int var_16 = 15829196007942802972ULL;
short var_17 = (short)27464;
int zero = 0;
short var_18 = (short)4765;
long long int var_19 = 7997009091121105537LL;
unsigned short var_20 = (unsigned short)19401;
long long int var_21 = -4448777198324834359LL;
unsigned int var_22 = 2568749654U;
signed char var_23 = (signed char)111;
unsigned long long int var_24 = 16562990395975986243ULL;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)20263;
unsigned short var_27 = (unsigned short)25615;
unsigned long long int var_28 = 3097675880012076915ULL;
unsigned long long int var_29 = 5753238342360997299ULL;
long long int var_30 = -1515743106076123956LL;
unsigned short var_31 = (unsigned short)13360;
int var_32 = 1786800168;
unsigned int var_33 = 3784896077U;
unsigned short var_34 = (unsigned short)22051;
unsigned char var_35 = (unsigned char)108;
unsigned short var_36 = (unsigned short)40375;
short var_37 = (short)-23505;
int var_38 = 793291366;
int var_39 = -1529722531;
long long int var_40 = -4788320844141112183LL;
long long int var_41 = 272229424458682117LL;
long long int var_42 = 2492359071266926074LL;
unsigned short var_43 = (unsigned short)33486;
unsigned short var_44 = (unsigned short)2121;
unsigned long long int var_45 = 10338518599714052616ULL;
signed char var_46 = (signed char)6;
unsigned char arr_8 [10] [10] ;
unsigned long long int arr_12 [10] ;
unsigned int arr_13 [10] ;
int arr_25 [10] ;
unsigned char arr_32 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 14825353138976021362ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 3685013954U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = -2142694532;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)173;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
