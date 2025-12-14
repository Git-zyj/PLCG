#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3861390659U;
short var_1 = (short)7366;
short var_2 = (short)27995;
unsigned char var_4 = (unsigned char)100;
unsigned short var_6 = (unsigned short)36312;
unsigned int var_8 = 2246901966U;
unsigned int var_9 = 1848894461U;
signed char var_11 = (signed char)-61;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)30477;
unsigned char var_14 = (unsigned char)102;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1906606802U;
signed char var_18 = (signed char)58;
unsigned long long int var_19 = 13332171775938097515ULL;
short var_20 = (short)-29779;
unsigned short var_21 = (unsigned short)31035;
unsigned long long int var_22 = 9407233269233469480ULL;
unsigned int var_23 = 3513424829U;
unsigned short var_24 = (unsigned short)38936;
unsigned short var_25 = (unsigned short)51542;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-1589;
unsigned long long int var_28 = 13981191656967119525ULL;
int var_29 = -970832101;
unsigned int var_30 = 292296728U;
unsigned char var_31 = (unsigned char)127;
unsigned short var_32 = (unsigned short)54438;
unsigned long long int var_33 = 10914601632458915478ULL;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 2318948355U;
unsigned long long int var_36 = 4529052039617334848ULL;
unsigned char var_37 = (unsigned char)47;
_Bool var_38 = (_Bool)1;
unsigned char var_39 = (unsigned char)151;
unsigned long long int var_40 = 13187694244465780241ULL;
unsigned char var_41 = (unsigned char)87;
long long int var_42 = -5816164627059512877LL;
long long int var_43 = -1629242522661862725LL;
unsigned short var_44 = (unsigned short)63243;
unsigned long long int var_45 = 9672600392653995357ULL;
unsigned char var_46 = (unsigned char)16;
unsigned short var_47 = (unsigned short)22307;
_Bool var_48 = (_Bool)0;
_Bool var_49 = (_Bool)0;
unsigned long long int arr_3 [12] [12] [12] ;
unsigned char arr_5 [12] ;
int arr_6 [12] [12] [12] [12] [12] ;
unsigned int arr_8 [12] ;
unsigned int arr_15 [12] ;
unsigned char arr_16 [12] ;
unsigned short arr_18 [12] [12] ;
int arr_20 [12] [12] ;
unsigned int arr_22 [12] [12] [12] [12] ;
unsigned long long int arr_26 [12] ;
signed char arr_28 [12] [12] [12] ;
int arr_38 [12] [12] [12] ;
_Bool arr_40 [12] [12] [12] [12] ;
unsigned short arr_42 [12] [12] [12] [12] ;
unsigned char arr_49 [12] [12] [12] ;
unsigned char arr_51 [12] [12] [12] [12] [12] ;
unsigned char arr_52 [12] [12] [12] [12] ;
unsigned short arr_60 [12] ;
int arr_74 [12] ;
unsigned short arr_76 [12] [12] [12] [12] [12] [12] [12] ;
signed char arr_13 [12] ;
unsigned long long int arr_23 [12] ;
unsigned char arr_24 [12] [12] [12] ;
unsigned int arr_29 [12] [12] ;
unsigned char arr_35 [12] [12] [12] ;
unsigned short arr_44 [12] ;
signed char arr_68 [12] [12] [12] ;
unsigned int arr_77 [12] [12] ;
unsigned int arr_78 [12] [12] ;
_Bool arr_81 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10084218220109396181ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = -1252296305;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 3051346828U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 2016348032U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)60778 : (unsigned short)40463;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = -1979086523;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 430845644U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 3800860535417723802ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = -1937234027;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18694;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)185 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)216 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_60 [i_0] = (unsigned short)35890;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_74 [i_0] = -399875826;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)33756;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2179773917639390998ULL : 17343426994217214514ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)81 : (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 3426235343U : 1846936338U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)118 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21264 : (unsigned short)21493;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_77 [i_0] [i_1] = 3198720690U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_78 [i_0] [i_1] = 1477919409U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_81 [i_0] = (_Bool)1;
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_68 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_77 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_78 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_81 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
