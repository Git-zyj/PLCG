#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1351380901112792762ULL;
unsigned long long int var_1 = 16596683244497664207ULL;
int var_2 = 372123067;
_Bool var_3 = (_Bool)0;
int var_5 = 61782097;
unsigned char var_6 = (unsigned char)219;
int var_7 = -1435146695;
short var_8 = (short)-8546;
short var_9 = (short)-13136;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)58659;
int var_12 = 1554561250;
unsigned char var_13 = (unsigned char)4;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1494185970U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-2847;
unsigned char var_18 = (unsigned char)119;
short var_19 = (short)-28345;
unsigned int var_20 = 912094254U;
unsigned char var_21 = (unsigned char)17;
unsigned int var_22 = 1741958336U;
signed char var_23 = (signed char)17;
short var_24 = (short)25291;
long long int var_25 = -2501132173230774258LL;
unsigned int var_26 = 4073888579U;
short var_27 = (short)9957;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3441205683U;
long long int var_30 = -7825620287998779487LL;
long long int var_31 = 3277381400314971067LL;
long long int var_32 = 4924923389514092987LL;
int var_33 = 699209345;
signed char var_34 = (signed char)37;
unsigned char var_35 = (unsigned char)71;
signed char var_36 = (signed char)118;
unsigned char var_37 = (unsigned char)176;
unsigned char var_38 = (unsigned char)91;
int var_39 = -1051968983;
int var_40 = -1707926018;
unsigned short var_41 = (unsigned short)32371;
long long int var_42 = -2907751905808578973LL;
unsigned long long int var_43 = 7773451170997483992ULL;
_Bool var_44 = (_Bool)0;
_Bool arr_0 [25] ;
long long int arr_1 [25] ;
long long int arr_2 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned char arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned char arr_6 [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] ;
unsigned int arr_13 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_14 [13] [13] [13] [13] [13] ;
int arr_18 [13] ;
unsigned short arr_20 [13] [13] [13] [13] [13] ;
_Bool arr_23 [13] [13] [13] [13] ;
short arr_27 [13] [13] [13] [13] ;
unsigned char arr_30 [13] [13] ;
unsigned short arr_32 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7775073995402096593LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 5671299343627146785LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 9339595276248695345ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 960106833683933042ULL : 3479168045210351346ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3912195594U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 606458750U : 2004305124U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = -782060682;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)48500 : (unsigned short)44109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (short)-25200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)226 : (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)50210 : (unsigned short)24265;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
