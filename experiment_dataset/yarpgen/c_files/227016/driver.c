#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_19 = 8314363825918490297ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-308;
unsigned short var_22 = (unsigned short)37453;
unsigned char var_23 = (unsigned char)165;
unsigned int var_24 = 2645301376U;
short var_25 = (short)-30276;
long long int var_26 = 200324026469647552LL;
short var_27 = (short)30372;
short var_28 = (short)5156;
long long int var_29 = 6534765420854873569LL;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)7427;
short var_33 = (short)13662;
unsigned int var_34 = 2698457866U;
unsigned short var_35 = (unsigned short)54288;
_Bool var_36 = (_Bool)0;
int var_37 = -1233035054;
short var_38 = (short)-19376;
unsigned short var_39 = (unsigned short)30762;
signed char var_40 = (signed char)-87;
short var_41 = (short)-27126;
unsigned int var_42 = 2329434663U;
long long int var_43 = -1383281294423731718LL;
unsigned long long int var_44 = 16226948895238614773ULL;
unsigned char var_45 = (unsigned char)13;
long long int var_46 = 7509902651983070122LL;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)0;
unsigned char var_49 = (unsigned char)167;
unsigned char var_50 = (unsigned char)49;
int var_51 = 1993361872;
long long int var_52 = 9088377587159318052LL;
unsigned short var_53 = (unsigned short)20256;
unsigned int var_54 = 352947134U;
long long int var_55 = -8521576715320491803LL;
int var_56 = -1783011268;
signed char var_57 = (signed char)-6;
_Bool var_58 = (_Bool)0;
unsigned short var_59 = (unsigned short)8666;
_Bool arr_3 [17] ;
int arr_4 [17] ;
unsigned char arr_9 [17] ;
long long int arr_22 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_23 [17] [17] [17] [17] [17] [17] ;
short arr_47 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1604627789;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? -5235588201609428181LL : 8844581227954292036LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1352543900U : 300699361U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_47 [i_0] = (short)-12277;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
