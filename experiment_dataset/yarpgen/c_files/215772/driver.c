#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
long long int var_1 = 1971789836505794530LL;
int var_2 = 1157309352;
unsigned int var_4 = 4155096948U;
unsigned int var_5 = 18671650U;
unsigned int var_6 = 871150960U;
int var_7 = 2023501302;
unsigned int var_8 = 1714640079U;
short var_9 = (short)-6833;
unsigned int var_10 = 3365134854U;
short var_11 = (short)14416;
short var_13 = (short)7718;
unsigned int var_14 = 203304729U;
short var_15 = (short)21493;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-96;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
long long int var_20 = 83681481025462935LL;
short var_21 = (short)13838;
int var_22 = 1078082037;
int var_23 = 311832559;
unsigned long long int var_24 = 5537481693966202346ULL;
_Bool var_25 = (_Bool)1;
int var_26 = -466307825;
signed char var_27 = (signed char)-77;
long long int var_28 = 661589175016534698LL;
unsigned short var_29 = (unsigned short)45943;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 10450475924052948242ULL;
unsigned int var_32 = 13059095U;
unsigned short var_33 = (unsigned short)28545;
_Bool var_34 = (_Bool)0;
int var_35 = 930182669;
int var_36 = -2124118183;
unsigned int var_37 = 516927849U;
int var_38 = -1887369470;
short var_39 = (short)30294;
short var_40 = (short)-6684;
long long int var_41 = -2383441846164434777LL;
unsigned short var_42 = (unsigned short)44432;
short var_43 = (short)-10104;
_Bool var_44 = (_Bool)1;
short var_45 = (short)-20449;
long long int arr_0 [21] [21] ;
short arr_3 [21] ;
short arr_8 [22] ;
int arr_9 [22] [22] ;
unsigned int arr_11 [21] [21] ;
signed char arr_12 [21] [21] ;
signed char arr_16 [21] [21] [21] ;
int arr_27 [21] ;
unsigned short arr_35 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -9096577336891305195LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)348;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)29612;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1532487614;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 3044298895U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = -1811056463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned short)15404;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
