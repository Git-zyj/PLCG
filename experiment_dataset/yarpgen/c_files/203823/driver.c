#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-81;
int var_3 = 461311473;
int var_4 = 2120122396;
signed char var_6 = (signed char)92;
signed char var_7 = (signed char)43;
unsigned int var_8 = 3878186771U;
unsigned long long int var_10 = 15796632638868408734ULL;
int zero = 0;
signed char var_12 = (signed char)101;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3229916761U;
int var_15 = -944702503;
unsigned int var_16 = 3800620034U;
unsigned short var_17 = (unsigned short)64121;
short var_18 = (short)-29436;
signed char var_19 = (signed char)-41;
int var_20 = -1566117512;
signed char var_21 = (signed char)1;
unsigned int var_22 = 1211136536U;
int var_23 = -1004195610;
int var_24 = 716272855;
signed char var_25 = (signed char)15;
signed char var_26 = (signed char)-48;
unsigned int var_27 = 2866594008U;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)-58;
unsigned int var_30 = 1345088310U;
signed char var_31 = (signed char)46;
unsigned long long int var_32 = 4002474380180121971ULL;
unsigned short var_33 = (unsigned short)50428;
unsigned long long int var_34 = 7648849903555041154ULL;
unsigned char var_35 = (unsigned char)181;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)-12;
int var_38 = -896187900;
short var_39 = (short)3624;
signed char var_40 = (signed char)-89;
unsigned int var_41 = 2461341068U;
unsigned short var_42 = (unsigned short)57044;
signed char var_43 = (signed char)16;
unsigned short var_44 = (unsigned short)52776;
unsigned short var_45 = (unsigned short)50810;
short var_46 = (short)-25640;
signed char var_47 = (signed char)65;
unsigned short arr_0 [23] ;
signed char arr_5 [23] [23] ;
signed char arr_8 [23] [23] [23] [23] ;
_Bool arr_14 [23] [23] [23] [23] ;
short arr_16 [24] ;
int arr_18 [24] [24] ;
unsigned char arr_21 [24] [24] [24] ;
int arr_23 [24] [24] [24] [24] ;
signed char arr_25 [24] [24] [24] ;
long long int arr_26 [24] [24] [24] [24] [24] [24] ;
signed char arr_27 [24] ;
int arr_28 [24] [24] [24] [24] [24] [24] [24] ;
short arr_31 [24] [24] [24] [24] ;
int arr_38 [24] [24] [24] [24] [24] ;
unsigned long long int arr_39 [24] [24] [24] [24] ;
unsigned int arr_42 [24] [24] [24] [24] ;
int arr_49 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)19277;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (short)28554;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 203793261 : 599451329;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)215 : (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1375610118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 7471154123069030390LL : 4772428775288136988LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -405660220;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)31935;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = -768698146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10027245717241843335ULL : 6270212037437043306ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 4135044693U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = -1102305543;
}

void checksum() {
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
