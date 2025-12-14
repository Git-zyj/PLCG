#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1713643723U;
long long int var_1 = 8348466995813831949LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3555992192U;
long long int var_4 = 7210346320785570584LL;
unsigned int var_5 = 4048226525U;
unsigned short var_6 = (unsigned short)63354;
unsigned short var_7 = (unsigned short)5002;
short var_8 = (short)25165;
unsigned long long int var_9 = 16381947320730498595ULL;
unsigned int var_10 = 313962572U;
unsigned short var_11 = (unsigned short)44038;
long long int var_12 = -7985275179996611315LL;
unsigned char var_13 = (unsigned char)241;
unsigned short var_14 = (unsigned short)47117;
unsigned short var_15 = (unsigned short)49305;
long long int var_16 = -9223252167542183218LL;
int zero = 0;
unsigned short var_17 = (unsigned short)51766;
short var_18 = (short)15064;
_Bool var_19 = (_Bool)0;
long long int var_20 = -4357916945877511769LL;
unsigned char var_21 = (unsigned char)133;
unsigned int var_22 = 2511913344U;
long long int var_23 = -1593795058861467662LL;
unsigned long long int var_24 = 11521312882337209721ULL;
short var_25 = (short)-1953;
unsigned int var_26 = 3825060853U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)18255;
short var_29 = (short)-29333;
unsigned int var_30 = 2275436070U;
unsigned short var_31 = (unsigned short)55127;
_Bool var_32 = (_Bool)0;
long long int var_33 = 3898196666588209117LL;
unsigned char var_34 = (unsigned char)152;
short var_35 = (short)13081;
unsigned char var_36 = (unsigned char)109;
unsigned int var_37 = 100677220U;
unsigned int arr_0 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned short arr_6 [21] [21] ;
long long int arr_9 [21] [21] ;
short arr_10 [21] ;
long long int arr_11 [21] [21] [21] ;
unsigned int arr_14 [21] ;
long long int arr_15 [21] [21] [21] ;
short arr_16 [21] [21] [21] ;
_Bool arr_19 [21] ;
unsigned char arr_3 [21] [21] ;
unsigned short arr_12 [21] [21] [21] [21] ;
short arr_13 [21] ;
short arr_24 [21] [21] ;
unsigned short arr_29 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 192633503U : 3709216049U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2977808385U : 3113758400U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1122411105560742316ULL : 14890330529972580418ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)54576;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 2456036213467518972LL : 8970854008197042378LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)-7053;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 807052077595775451LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 400740903U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -5927220974595814086LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)3241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)51151 : (unsigned short)60064;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)18989 : (short)27395;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-32139 : (short)-17623;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34163 : (unsigned short)42450;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
