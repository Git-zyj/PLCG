#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 514284192;
long long int var_1 = -1735988193485972383LL;
short var_2 = (short)-28329;
unsigned long long int var_4 = 2639054889354836580ULL;
unsigned long long int var_6 = 16221830537312705534ULL;
signed char var_7 = (signed char)67;
long long int var_8 = -6044158939899155082LL;
unsigned int var_9 = 1080406930U;
unsigned int var_10 = 1908492499U;
unsigned short var_12 = (unsigned short)58625;
int var_13 = 716361051;
signed char var_14 = (signed char)-21;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-26167;
long long int var_17 = -3159553298655917345LL;
unsigned int var_18 = 2765252174U;
int zero = 0;
int var_20 = -1222037697;
unsigned long long int var_21 = 10437612295341578646ULL;
short var_22 = (short)13019;
unsigned int var_23 = 3679665101U;
int var_24 = 306852495;
long long int var_25 = 6156370260496537831LL;
int var_26 = 730316600;
unsigned long long int var_27 = 16259146316741998288ULL;
long long int var_28 = -1594232421654802063LL;
long long int var_29 = -5755331636407171302LL;
unsigned char var_30 = (unsigned char)75;
unsigned short var_31 = (unsigned short)19557;
short var_32 = (short)-17478;
unsigned char var_33 = (unsigned char)111;
short var_34 = (short)-19662;
unsigned int var_35 = 188403633U;
short var_36 = (short)7531;
short var_37 = (short)-16694;
unsigned char var_38 = (unsigned char)104;
int var_39 = 401802185;
unsigned int var_40 = 2983448780U;
signed char var_41 = (signed char)-117;
short var_42 = (short)-30040;
unsigned short var_43 = (unsigned short)45540;
long long int var_44 = 6472903649116690102LL;
int var_45 = -22809053;
unsigned long long int var_46 = 7043070642702910236ULL;
long long int var_47 = 4120015239098213775LL;
signed char var_48 = (signed char)19;
signed char var_49 = (signed char)119;
short var_50 = (short)22364;
unsigned long long int var_51 = 7391427874667754268ULL;
unsigned int var_52 = 2805875557U;
unsigned long long int var_53 = 17427364777989185831ULL;
unsigned short var_54 = (unsigned short)31558;
unsigned short arr_0 [13] ;
short arr_1 [13] [13] ;
short arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
short arr_4 [13] ;
short arr_6 [13] [13] [13] ;
short arr_7 [13] ;
short arr_9 [13] [13] [13] ;
short arr_10 [13] [13] [13] [13] [13] ;
long long int arr_11 [13] [13] [13] [13] [13] ;
unsigned long long int arr_12 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_14 [13] [13] [13] [13] [13] ;
signed char arr_15 [13] [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_16 [13] [13] ;
int arr_17 [13] [13] [13] ;
unsigned long long int arr_18 [13] ;
unsigned short arr_19 [13] [13] [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] [13] [13] [13] [13] ;
short arr_23 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_24 [13] [13] [13] ;
unsigned char arr_26 [13] [13] [13] [13] ;
long long int arr_32 [22] ;
int arr_33 [22] [22] ;
short arr_34 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27465 : (unsigned short)10185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5584 : (short)14676;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)30520;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)25273 : (short)-20221;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-21140 : (short)30221;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)391;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-26941 : (short)-13183;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (short)-19458 : (short)15198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 7762920432532362941LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 10923981466719679783ULL : 8981325646285914125ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 744343225352541457ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1153797494 : 327853384;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 17078111002068023459ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)37395;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1200961838147620282ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-28186 : (short)-15137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18001747628167320420ULL : 8081600311279361172ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = -7773498439856519885LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = -1234006955;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (short)-13955;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
