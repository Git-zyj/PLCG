#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3540353497U;
short var_1 = (short)28907;
signed char var_3 = (signed char)-47;
unsigned int var_4 = 1445760126U;
long long int var_5 = 3009282843741971969LL;
short var_7 = (short)15973;
signed char var_8 = (signed char)-40;
unsigned char var_9 = (unsigned char)148;
long long int var_10 = 3468065511696984258LL;
unsigned char var_11 = (unsigned char)60;
unsigned char var_12 = (unsigned char)246;
long long int var_13 = 7861370760750553311LL;
short var_14 = (short)-21452;
unsigned int var_15 = 1790383483U;
int zero = 0;
long long int var_16 = -4469324211368469353LL;
long long int var_17 = 3283045804360229183LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8730117846111760395LL;
unsigned int var_20 = 691950377U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-26156;
unsigned short var_23 = (unsigned short)15606;
long long int var_24 = -7626549744546663188LL;
signed char var_25 = (signed char)-82;
short var_26 = (short)-21337;
int var_27 = -193947706;
unsigned short var_28 = (unsigned short)56006;
long long int var_29 = -8187529937060143033LL;
unsigned long long int var_30 = 14127007407498961575ULL;
short var_31 = (short)29425;
unsigned short var_32 = (unsigned short)36269;
signed char var_33 = (signed char)93;
unsigned int var_34 = 2064563506U;
long long int var_35 = -850603038073896477LL;
short var_36 = (short)-26476;
long long int arr_1 [10] ;
short arr_2 [10] ;
short arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
unsigned short arr_5 [11] [11] ;
signed char arr_7 [11] [11] ;
long long int arr_8 [11] ;
_Bool arr_10 [11] ;
unsigned char arr_11 [11] [11] [11] ;
long long int arr_14 [11] [11] [11] ;
int arr_18 [11] [11] [11] [11] [11] ;
unsigned int arr_19 [11] [11] [11] [11] [11] ;
_Bool arr_20 [11] [11] [11] [11] ;
long long int arr_21 [11] [11] [11] [11] ;
unsigned int arr_6 [11] [11] ;
long long int arr_23 [11] [11] ;
unsigned short arr_24 [11] ;
long long int arr_29 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -7654755889085720677LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)17845;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)19054 : (short)-10993;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)28506;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)6030 : (unsigned short)36128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -5327514848885282666LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8117757510906327662LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1371327713 : -402778526;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1480355243U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3503219655106751676LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 4250613211U : 1185117955U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? -2525304800933068785LL : -3864027642052521382LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33434 : (unsigned short)60572;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = 4503683509490246180LL;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
