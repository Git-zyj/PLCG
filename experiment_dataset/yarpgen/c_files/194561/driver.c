#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10609;
unsigned long long int var_3 = 7860999881648070799ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3501755149U;
unsigned long long int var_6 = 92086706808336901ULL;
int var_8 = 1682989728;
short var_9 = (short)-8522;
unsigned int var_11 = 1027760983U;
signed char var_12 = (signed char)98;
unsigned long long int var_13 = 9643829759514716396ULL;
unsigned int var_15 = 4071155136U;
unsigned long long int var_16 = 12214581434297548048ULL;
long long int var_17 = -4733076341955025841LL;
int zero = 0;
unsigned short var_18 = (unsigned short)28105;
unsigned char var_19 = (unsigned char)75;
unsigned long long int var_20 = 12080053353680929588ULL;
signed char var_21 = (signed char)94;
short var_22 = (short)-8997;
short var_23 = (short)31915;
unsigned char var_24 = (unsigned char)205;
signed char var_25 = (signed char)79;
signed char var_26 = (signed char)-21;
unsigned long long int var_27 = 14941157345407110871ULL;
unsigned long long int var_28 = 4865137095994348644ULL;
unsigned long long int var_29 = 2603483065359073663ULL;
unsigned long long int var_30 = 1682473782684254775ULL;
signed char var_31 = (signed char)33;
unsigned long long int var_32 = 14210716136304427989ULL;
_Bool var_33 = (_Bool)1;
long long int var_34 = -3333308435481928783LL;
int var_35 = 1225112876;
unsigned long long int var_36 = 16104489779280141920ULL;
unsigned short var_37 = (unsigned short)21867;
unsigned long long int var_38 = 13206666631213174672ULL;
int var_39 = -1009618304;
short var_40 = (short)19279;
unsigned long long int var_41 = 16323120339319453365ULL;
_Bool var_42 = (_Bool)0;
int var_43 = 1414835088;
int var_44 = 908301707;
unsigned long long int var_45 = 13416442822607659564ULL;
_Bool arr_1 [16] ;
_Bool arr_3 [19] ;
unsigned int arr_4 [19] [19] ;
int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
short arr_9 [19] [19] [19] ;
short arr_10 [19] [19] [19] ;
short arr_12 [19] ;
long long int arr_13 [19] [19] [19] [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
long long int arr_15 [19] ;
unsigned char arr_18 [19] [19] ;
unsigned char arr_21 [19] [19] [19] [19] ;
_Bool arr_22 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_26 [19] [19] [19] [19] ;
_Bool arr_28 [19] [19] [19] ;
unsigned char arr_31 [23] [23] ;
unsigned long long int arr_32 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 757861913U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 613762196;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 14497927624315468227ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)8896 : (short)-13289;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)15294;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (short)-4015;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 6279496518810359113LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 4229706653U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -2411080614818898622LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = 3213772394283304424ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
