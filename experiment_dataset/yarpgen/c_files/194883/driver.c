#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4199686619U;
long long int var_1 = -4346894221106361517LL;
unsigned long long int var_2 = 5120815839765895323ULL;
long long int var_3 = -24287835395803473LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)52423;
int var_7 = -641038956;
unsigned char var_8 = (unsigned char)60;
signed char var_9 = (signed char)-12;
unsigned short var_10 = (unsigned short)53904;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)87;
unsigned short var_13 = (unsigned short)6757;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = 1016090496;
int zero = 0;
unsigned short var_19 = (unsigned short)6782;
long long int var_20 = -6190926236623582454LL;
short var_21 = (short)14911;
unsigned int var_22 = 1804228044U;
unsigned int var_23 = 2688237705U;
long long int var_24 = 4244030254395286746LL;
signed char var_25 = (signed char)82;
unsigned long long int var_26 = 17498762293711669624ULL;
unsigned char var_27 = (unsigned char)100;
unsigned long long int var_28 = 3652752156296724170ULL;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-11098;
long long int var_31 = -9182308013530755886LL;
long long int var_32 = -7282843550423584619LL;
long long int var_33 = -6640022491519225723LL;
unsigned char var_34 = (unsigned char)133;
int var_35 = -609199849;
unsigned char var_36 = (unsigned char)151;
signed char var_37 = (signed char)9;
int var_38 = -639360549;
unsigned short var_39 = (unsigned short)17682;
unsigned int var_40 = 1286562753U;
short var_41 = (short)-31087;
unsigned char var_42 = (unsigned char)142;
signed char var_43 = (signed char)-44;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)152;
unsigned char var_46 = (unsigned char)93;
_Bool var_47 = (_Bool)1;
_Bool var_48 = (_Bool)1;
unsigned char var_49 = (unsigned char)214;
unsigned short var_50 = (unsigned short)32975;
unsigned char var_51 = (unsigned char)245;
unsigned short var_52 = (unsigned short)56744;
unsigned char var_53 = (unsigned char)36;
unsigned char var_54 = (unsigned char)217;
unsigned char var_55 = (unsigned char)39;
_Bool var_56 = (_Bool)0;
long long int var_57 = 4919528840370005190LL;
unsigned long long int var_58 = 8274252839447575825ULL;
int var_59 = -1489219008;
_Bool var_60 = (_Bool)1;
_Bool var_61 = (_Bool)0;
short arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_3 [24] ;
unsigned char arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] ;
unsigned char arr_6 [24] [24] ;
signed char arr_8 [24] ;
long long int arr_9 [24] ;
_Bool arr_10 [24] [24] [24] [24] ;
unsigned int arr_11 [24] [24] [24] ;
_Bool arr_12 [24] [24] [24] ;
short arr_14 [24] [24] [24] [24] ;
unsigned char arr_15 [24] [24] [24] [24] [24] ;
unsigned char arr_16 [24] [24] [24] [24] [24] [24] ;
_Bool arr_19 [24] [24] [24] [24] [24] [24] [24] ;
long long int arr_22 [24] [24] [24] [24] [24] ;
int arr_28 [24] [24] [24] ;
int arr_45 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)7416;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 6118971687516735417ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -1712236901300181375LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -7736321698061287295LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3048771476U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)24420;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = -308300827001820665LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -1402436517;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_45 [i_0] [i_1] = 2076531638;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
