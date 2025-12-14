#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2596;
short var_1 = (short)32635;
unsigned char var_2 = (unsigned char)161;
unsigned short var_3 = (unsigned short)23553;
long long int var_4 = -2080136024199958321LL;
long long int var_5 = -1558671963491084652LL;
int var_6 = 842933220;
unsigned char var_7 = (unsigned char)199;
short var_8 = (short)31394;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)64;
long long int var_11 = 6317891804886176634LL;
unsigned char var_12 = (unsigned char)129;
unsigned long long int var_13 = 789246173547566564ULL;
long long int var_14 = -7969777287423959697LL;
unsigned char var_15 = (unsigned char)123;
signed char var_16 = (signed char)121;
unsigned int var_17 = 3459921190U;
short var_18 = (short)21605;
long long int var_19 = 1393599183394884438LL;
int zero = 0;
short var_20 = (short)24269;
int var_21 = 449159292;
unsigned char var_22 = (unsigned char)194;
short var_23 = (short)21339;
unsigned char var_24 = (unsigned char)49;
unsigned short var_25 = (unsigned short)26421;
unsigned char var_26 = (unsigned char)177;
long long int var_27 = 6293273407608928833LL;
unsigned short var_28 = (unsigned short)7113;
short var_29 = (short)-10987;
unsigned short var_30 = (unsigned short)52925;
long long int var_31 = 8993173894808822299LL;
signed char var_32 = (signed char)121;
long long int var_33 = 6305863669181987346LL;
unsigned long long int var_34 = 9939174663167470025ULL;
long long int var_35 = 7861957157177341649LL;
int var_36 = 1685883393;
unsigned short var_37 = (unsigned short)62469;
short var_38 = (short)20163;
unsigned char arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] [12] [12] ;
short arr_6 [12] ;
unsigned char arr_8 [12] [12] ;
long long int arr_10 [23] ;
unsigned char arr_14 [23] [23] [23] ;
unsigned char arr_15 [23] ;
long long int arr_16 [23] [23] [23] [23] ;
_Bool arr_21 [24] [24] ;
long long int arr_26 [24] ;
_Bool arr_27 [24] [24] ;
unsigned short arr_30 [24] ;
unsigned long long int arr_32 [24] [24] [24] [24] [24] ;
short arr_36 [24] ;
unsigned short arr_37 [24] ;
signed char arr_5 [12] ;
int arr_13 [23] ;
_Bool arr_33 [24] [24] [24] [24] [24] ;
unsigned long long int arr_34 [24] ;
long long int arr_39 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 607426962U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)10357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)34682;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)14189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -6799799257713564453LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)114 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3275942236409587949LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 133101582168645454LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)29351;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 14729159275242692474ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (short)-4589;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (unsigned short)24744;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -198467879 : 1055823345;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 758974671712135723ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_39 [i_0] [i_1] = 3040280480301945198LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
