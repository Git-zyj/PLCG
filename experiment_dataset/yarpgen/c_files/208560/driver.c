#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned int var_1 = 376263507U;
long long int var_2 = 5115751731055484748LL;
unsigned long long int var_3 = 13730650063607445166ULL;
unsigned short var_4 = (unsigned short)26880;
unsigned short var_5 = (unsigned short)21291;
int var_6 = -1218885901;
signed char var_7 = (signed char)15;
unsigned short var_8 = (unsigned short)53806;
signed char var_9 = (signed char)-98;
signed char var_10 = (signed char)77;
signed char var_11 = (signed char)63;
unsigned char var_12 = (unsigned char)99;
unsigned long long int var_13 = 183684677255817310ULL;
unsigned int var_14 = 936121336U;
int zero = 0;
int var_15 = -1360844571;
unsigned char var_16 = (unsigned char)171;
long long int var_17 = -1547509654297606262LL;
int var_18 = -860671704;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-40;
unsigned char var_21 = (unsigned char)115;
unsigned short var_22 = (unsigned short)21678;
unsigned char var_23 = (unsigned char)44;
signed char var_24 = (signed char)73;
int var_25 = -782845636;
unsigned short var_26 = (unsigned short)47980;
unsigned int var_27 = 2832311965U;
unsigned char var_28 = (unsigned char)145;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 14254164420104445948ULL;
unsigned short var_31 = (unsigned short)6992;
unsigned long long int var_32 = 17887178259896713999ULL;
int var_33 = 962397333;
unsigned int var_34 = 2893339807U;
signed char var_35 = (signed char)31;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)5;
unsigned int var_38 = 2065326393U;
int var_39 = -1390903409;
unsigned char var_40 = (unsigned char)181;
_Bool var_41 = (_Bool)0;
unsigned char var_42 = (unsigned char)11;
signed char var_43 = (signed char)-19;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)72;
unsigned short var_46 = (unsigned short)34087;
unsigned char var_47 = (unsigned char)173;
unsigned char var_48 = (unsigned char)83;
unsigned char var_49 = (unsigned char)193;
int var_50 = -1844624551;
int arr_8 [14] [14] ;
unsigned short arr_22 [14] [14] [14] [14] ;
_Bool arr_25 [14] ;
unsigned int arr_53 [17] [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 1225763702 : -1910805766;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)24903;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 2606344341U : 2866091078U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
