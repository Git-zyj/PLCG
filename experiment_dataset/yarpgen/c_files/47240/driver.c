#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1842;
unsigned long long int var_1 = 10132027830959963167ULL;
unsigned short var_2 = (unsigned short)33080;
short var_3 = (short)-25291;
unsigned short var_4 = (unsigned short)52372;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 504657791U;
unsigned short var_7 = (unsigned short)24811;
signed char var_8 = (signed char)120;
unsigned short var_9 = (unsigned short)43471;
unsigned short var_10 = (unsigned short)32516;
unsigned long long int var_11 = 17061618085799299319ULL;
unsigned int var_12 = 2984091539U;
long long int var_13 = 6100850333230883827LL;
int var_14 = -1029866812;
signed char var_15 = (signed char)-36;
short var_16 = (short)-10118;
unsigned long long int var_18 = 1557247560878778094ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6834179204548403267LL;
signed char var_21 = (signed char)41;
unsigned long long int var_22 = 11469309642258114361ULL;
long long int var_23 = 538691640738808176LL;
long long int var_24 = -2012706110622243779LL;
int var_25 = -1634873922;
short var_26 = (short)25420;
signed char var_27 = (signed char)68;
unsigned char var_28 = (unsigned char)52;
short var_29 = (short)16300;
signed char var_30 = (signed char)117;
short var_31 = (short)-24324;
unsigned char var_32 = (unsigned char)253;
short var_33 = (short)15411;
int var_34 = 1716417612;
unsigned long long int var_35 = 9095672579300777352ULL;
unsigned int var_36 = 2565870450U;
signed char var_37 = (signed char)66;
unsigned long long int var_38 = 7955650801274159188ULL;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 14927951876022056365ULL;
unsigned int var_41 = 2942756379U;
_Bool arr_4 [14] ;
int arr_20 [14] [14] [14] ;
unsigned short arr_26 [14] [14] [14] ;
long long int arr_31 [14] [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1413645105 : -689442686;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)37025 : (unsigned short)37526;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 2611028363990913262LL : -8769291741880072121LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
