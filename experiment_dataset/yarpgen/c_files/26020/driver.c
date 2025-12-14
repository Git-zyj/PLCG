#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
short var_2 = (short)-2783;
int var_3 = 1704067187;
long long int var_4 = 6098823130927838365LL;
unsigned short var_5 = (unsigned short)11327;
short var_6 = (short)24234;
long long int var_7 = 5847161692871052468LL;
unsigned short var_8 = (unsigned short)41953;
unsigned long long int var_9 = 7241801349875433225ULL;
unsigned char var_10 = (unsigned char)91;
unsigned char var_11 = (unsigned char)202;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3462757122495777080LL;
unsigned short var_14 = (unsigned short)51618;
unsigned char var_15 = (unsigned char)91;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)205;
long long int var_19 = 2913647638359912554LL;
unsigned long long int var_20 = 5353296008913587743ULL;
int var_21 = -1070823211;
_Bool var_22 = (_Bool)1;
int var_23 = 79881651;
unsigned long long int var_24 = 15598517751348612650ULL;
unsigned long long int var_25 = 1647687647556580705ULL;
long long int var_26 = 4660819906666659918LL;
_Bool var_27 = (_Bool)0;
long long int var_28 = 8760169382352746932LL;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3137121026U;
unsigned short var_31 = (unsigned short)29154;
long long int var_32 = -3360399149352074423LL;
unsigned long long int var_33 = 4123949452541971179ULL;
unsigned char var_34 = (unsigned char)49;
unsigned short var_35 = (unsigned short)30429;
unsigned char var_36 = (unsigned char)195;
unsigned long long int var_37 = 13329525748401839801ULL;
signed char var_38 = (signed char)28;
unsigned short var_39 = (unsigned short)40300;
unsigned long long int var_40 = 8581358819846528284ULL;
long long int var_41 = 6053070718698869191LL;
unsigned long long int var_42 = 325841017291105551ULL;
short var_43 = (short)-18253;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)68;
_Bool var_46 = (_Bool)0;
unsigned char var_47 = (unsigned char)134;
unsigned long long int var_48 = 16281544554428458889ULL;
unsigned long long int var_49 = 4396314282333650992ULL;
unsigned char var_50 = (unsigned char)226;
unsigned short var_51 = (unsigned short)14338;
unsigned long long int var_52 = 1647596011640015461ULL;
int var_53 = 968865490;
long long int var_54 = -4677374299276234866LL;
unsigned short arr_0 [14] [14] ;
int arr_1 [14] ;
unsigned char arr_2 [14] [14] ;
long long int arr_3 [14] ;
signed char arr_6 [14] [14] ;
signed char arr_7 [14] [14] [14] [14] ;
long long int arr_9 [14] ;
long long int arr_10 [14] [14] [14] [14] ;
signed char arr_11 [14] [14] [14] [14] ;
int arr_12 [14] [14] [14] ;
unsigned int arr_14 [17] ;
long long int arr_15 [17] [17] ;
unsigned short arr_16 [17] ;
signed char arr_17 [13] ;
unsigned long long int arr_19 [13] ;
unsigned int arr_24 [13] [13] [13] ;
unsigned char arr_25 [13] [13] ;
_Bool arr_26 [13] ;
unsigned long long int arr_27 [13] [13] [13] ;
int arr_34 [13] ;
long long int arr_43 [13] [13] [13] ;
short arr_53 [16] [16] [16] ;
unsigned char arr_55 [16] [16] [16] ;
_Bool arr_57 [17] ;
long long int arr_59 [17] [17] ;
_Bool arr_5 [14] [14] ;
unsigned long long int arr_13 [14] ;
_Bool arr_23 [13] ;
long long int arr_49 [13] [13] [13] [13] ;
long long int arr_56 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)38001;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1481322026;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5497324079507327668LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -1061344408510792234LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -5974983022363194028LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1885343066;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 2846118001U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = -8659957518241148297LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)56051;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 17000276544150204100ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 1304624817U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 12568188819783982263ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = -1658649258;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 8974846583420388417LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (short)20266;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_57 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_59 [i_0] [i_1] = 8093512389442622011LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 11915928948358444025ULL : 13894062877524721817ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_49 [i_0] [i_1] [i_2] [i_3] = 5840496140733461434LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_56 [i_0] = 2446984320274392013LL;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_56 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
