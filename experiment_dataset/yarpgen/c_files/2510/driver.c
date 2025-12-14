#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5445;
unsigned int var_2 = 1790963699U;
unsigned int var_4 = 2795247962U;
int var_5 = -113469595;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-16635;
short var_10 = (short)20874;
unsigned short var_13 = (unsigned short)34954;
signed char var_14 = (signed char)59;
int var_15 = -93162337;
unsigned int var_16 = 1287469688U;
int var_17 = 1891085920;
unsigned long long int var_18 = 12026590170166308481ULL;
int zero = 0;
short var_19 = (short)-27522;
unsigned short var_20 = (unsigned short)9798;
unsigned char var_21 = (unsigned char)187;
signed char var_22 = (signed char)71;
unsigned long long int var_23 = 13198310112592139052ULL;
signed char var_24 = (signed char)75;
short var_25 = (short)20248;
short var_26 = (short)-21033;
short var_27 = (short)-27366;
unsigned long long int var_28 = 3174268935325481441ULL;
unsigned char var_29 = (unsigned char)122;
short var_30 = (short)31727;
short var_31 = (short)23419;
short var_32 = (short)-25536;
signed char var_33 = (signed char)83;
unsigned long long int var_34 = 13410501948213796135ULL;
unsigned long long int var_35 = 9208354337402325014ULL;
signed char var_36 = (signed char)-67;
unsigned int var_37 = 1534100906U;
short var_38 = (short)15258;
int var_39 = 1739915306;
unsigned long long int var_40 = 13479709608185987919ULL;
signed char var_41 = (signed char)20;
signed char arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned int arr_3 [12] ;
short arr_5 [12] ;
short arr_6 [12] [12] [12] ;
unsigned int arr_7 [12] ;
signed char arr_9 [12] ;
long long int arr_12 [12] [12] [12] ;
_Bool arr_15 [12] [12] [12] [12] ;
signed char arr_16 [12] [12] [12] ;
_Bool arr_19 [12] [12] [12] [12] ;
short arr_20 [12] [12] [12] [12] ;
int arr_22 [12] [12] ;
short arr_23 [12] ;
signed char arr_25 [12] ;
unsigned long long int arr_32 [12] [12] [12] ;
unsigned int arr_36 [12] ;
unsigned char arr_2 [14] ;
long long int arr_10 [12] ;
long long int arr_21 [12] [12] [12] ;
_Bool arr_33 [12] [12] ;
signed char arr_34 [12] ;
long long int arr_39 [12] [12] [12] ;
short arr_42 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1001365564U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 292889329U : 3972296058U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-7359;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)8475;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 919790006U : 1368714792U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 5563447508613140756LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-15146 : (short)27408;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -1712945652 : 482199946;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (short)-21864;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 3522434947476808304ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = 634308543U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -328976301458779564LL : -2675365640227416308LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3447592706260697894LL : -7954913929250115447LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = -1504697529375296766LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (short)-21325 : (short)-17835;
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
