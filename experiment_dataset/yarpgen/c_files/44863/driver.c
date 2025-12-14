#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39701;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 3230243518398721194ULL;
unsigned short var_4 = (unsigned short)44905;
int var_5 = -519230942;
int var_6 = -796212380;
signed char var_7 = (signed char)-5;
unsigned long long int var_8 = 1890778115228579902ULL;
signed char var_9 = (signed char)55;
long long int var_10 = 5922587750737465950LL;
unsigned int var_11 = 3760461184U;
unsigned char var_13 = (unsigned char)244;
unsigned short var_14 = (unsigned short)50612;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 2127956837693287239ULL;
long long int var_18 = 6051486704042328299LL;
unsigned char var_19 = (unsigned char)224;
unsigned int var_20 = 3124616892U;
long long int var_21 = -6018885155874029447LL;
int var_22 = -1189776998;
unsigned short var_23 = (unsigned short)20886;
signed char var_24 = (signed char)48;
int var_25 = 38480110;
unsigned short var_26 = (unsigned short)63933;
long long int var_27 = -5245676975126338181LL;
unsigned short var_28 = (unsigned short)33246;
unsigned char var_29 = (unsigned char)190;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)24404;
unsigned char var_32 = (unsigned char)104;
signed char var_33 = (signed char)55;
short var_34 = (short)-11668;
unsigned short var_35 = (unsigned short)1574;
unsigned long long int var_36 = 12949486840791404942ULL;
unsigned short var_37 = (unsigned short)18761;
signed char var_38 = (signed char)32;
long long int var_39 = 3214219230472165849LL;
unsigned char var_40 = (unsigned char)2;
long long int var_41 = -1159983969280824466LL;
short arr_1 [16] ;
int arr_2 [16] ;
signed char arr_3 [16] [16] ;
unsigned int arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] [16] [16] [16] ;
short arr_7 [16] ;
long long int arr_10 [16] [16] [16] [16] ;
unsigned short arr_11 [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] [16] [16] ;
unsigned char arr_14 [16] [16] [16] ;
unsigned char arr_15 [20] ;
long long int arr_16 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)14127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -1819741458;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1607520404U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)1215;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 727634254504086317LL : 5336650489012796585LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)36411;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 833543726 : -1625737902;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 12862861920854102346ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)25 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 4244215718214185383LL;
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
