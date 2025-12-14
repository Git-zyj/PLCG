#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 733294440U;
int var_3 = 293335524;
short var_6 = (short)-11399;
short var_9 = (short)-30762;
signed char var_10 = (signed char)-114;
long long int var_11 = 6103499272304230540LL;
short var_12 = (short)-27353;
unsigned int var_13 = 3743744478U;
short var_15 = (short)-8692;
long long int var_16 = -1591920667377066328LL;
unsigned short var_17 = (unsigned short)61170;
int var_18 = -210324094;
int zero = 0;
short var_19 = (short)-412;
_Bool var_20 = (_Bool)1;
short var_21 = (short)32620;
long long int var_22 = -2294145255748172908LL;
long long int var_23 = 6173788952056406211LL;
signed char var_24 = (signed char)31;
long long int var_25 = -372105676943297484LL;
signed char var_26 = (signed char)57;
short var_27 = (short)5921;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)30255;
long long int var_30 = 8939420540025905898LL;
unsigned int var_31 = 1677684184U;
unsigned short var_32 = (unsigned short)42350;
short var_33 = (short)-24979;
short var_34 = (short)30697;
long long int var_35 = -6152135227607252827LL;
int var_36 = -1750700167;
short var_37 = (short)-16605;
int var_38 = 370908875;
short var_39 = (short)9343;
long long int var_40 = 2948054240679576918LL;
int arr_0 [19] [19] ;
long long int arr_1 [19] [19] ;
short arr_2 [19] ;
int arr_3 [19] [19] ;
long long int arr_5 [19] [19] [19] ;
short arr_9 [24] ;
unsigned short arr_10 [24] [24] ;
signed char arr_11 [24] [24] ;
long long int arr_12 [18] ;
long long int arr_18 [18] [18] [18] ;
long long int arr_30 [18] [18] [18] [18] [18] ;
unsigned int arr_33 [20] ;
long long int arr_29 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -1551494207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 8720049711134534087LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)3211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -213545689;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -5731073287290666497LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)25858;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53521 : (unsigned short)14197;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)63 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -2521698089443992566LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2721558426422955571LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 8160022785496524213LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = 792472910U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -8199433333186591617LL : 4279549422722664772LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
