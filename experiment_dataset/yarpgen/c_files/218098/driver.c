#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12630;
unsigned long long int var_1 = 13092961043356778636ULL;
short var_3 = (short)-19649;
unsigned char var_4 = (unsigned char)25;
short var_6 = (short)30506;
int var_7 = -228326704;
short var_11 = (short)-25633;
unsigned long long int var_12 = 14596471414131489903ULL;
unsigned int var_15 = 1277349458U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 3866083615393398601ULL;
long long int var_19 = -7801269469023845805LL;
unsigned int var_20 = 3632106693U;
signed char var_21 = (signed char)19;
long long int var_22 = 10943905341936840LL;
long long int var_23 = -2130112980531449192LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
int var_26 = 1077267361;
long long int var_27 = -5687273603716943281LL;
short arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
int arr_3 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-27879;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)24126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1426897504;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4004907237549307098ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 10148997959767181774ULL : 4463849310792484562ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
