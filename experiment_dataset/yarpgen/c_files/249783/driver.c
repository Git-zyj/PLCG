#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned long long int var_3 = 11402086590951601545ULL;
unsigned long long int var_4 = 4938557529620449190ULL;
unsigned int var_5 = 313282479U;
unsigned char var_6 = (unsigned char)130;
unsigned int var_8 = 1275022866U;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
int var_11 = -306937668;
int var_12 = 754438455;
unsigned char var_13 = (unsigned char)30;
short var_14 = (short)-3863;
unsigned int var_15 = 937537297U;
unsigned int var_16 = 877245976U;
short var_17 = (short)-7167;
long long int var_18 = -2475361682544812183LL;
unsigned long long int var_19 = 6783250889283664707ULL;
_Bool var_20 = (_Bool)0;
int var_21 = -1244211088;
unsigned long long int var_22 = 16358738308020891405ULL;
int var_23 = -1171318429;
short var_24 = (short)-794;
short var_25 = (short)-25751;
unsigned int var_26 = 229058062U;
short var_27 = (short)-3035;
unsigned char var_28 = (unsigned char)81;
unsigned char var_29 = (unsigned char)27;
unsigned char var_30 = (unsigned char)247;
unsigned short var_31 = (unsigned short)58751;
unsigned char var_32 = (unsigned char)151;
_Bool var_33 = (_Bool)0;
long long int var_34 = 9006956169166182920LL;
unsigned char var_35 = (unsigned char)179;
long long int var_36 = -1699001341210779177LL;
unsigned char var_37 = (unsigned char)218;
unsigned short var_38 = (unsigned short)57690;
unsigned long long int var_39 = 9219858429469484412ULL;
unsigned long long int var_40 = 15601705183416199742ULL;
signed char var_41 = (signed char)-22;
unsigned long long int var_42 = 6343541596345497980ULL;
signed char arr_0 [12] [12] ;
unsigned long long int arr_1 [12] [12] ;
short arr_3 [12] [12] ;
long long int arr_4 [12] ;
long long int arr_5 [12] ;
unsigned long long int arr_8 [12] ;
short arr_9 [12] [12] ;
long long int arr_15 [23] ;
unsigned long long int arr_16 [23] ;
unsigned long long int arr_18 [23] [23] ;
signed char arr_19 [23] ;
unsigned char arr_21 [23] [23] ;
unsigned int arr_23 [23] [23] [23] ;
unsigned long long int arr_25 [23] ;
long long int arr_26 [23] ;
long long int arr_27 [23] ;
_Bool arr_29 [23] [23] [23] [23] ;
unsigned long long int arr_30 [23] [23] [23] [23] [23] ;
short arr_31 [23] [23] [23] [23] ;
int arr_33 [23] [23] [23] [23] ;
unsigned char arr_34 [23] [23] [23] [23] ;
unsigned char arr_39 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_42 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 14126032152773417475ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-14275 : (short)-17860;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -447357047277923586LL : -7264564409098337500LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3032867451060579751LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 16922888382763719253ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)6145;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = -6752271977513059935LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 14445279674483251615ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 315862476278011362ULL : 1542330141630808057ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)214 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3966076867U : 582476914U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 87472437275582568ULL : 5600464097032298863ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = 4935473924615512851LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = 1304702799266823472LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 16120590450530855703ULL : 15832792437743774570ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)16364 : (short)-23479;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 1450358993;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)240 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)90 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 15691614906674437322ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
