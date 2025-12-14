#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4092517473U;
long long int var_1 = 8256297241160320386LL;
short var_3 = (short)27452;
long long int var_4 = 6040229480085315493LL;
unsigned char var_6 = (unsigned char)69;
unsigned int var_8 = 2560131003U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5867935581052374182LL;
unsigned char var_12 = (unsigned char)99;
unsigned char var_14 = (unsigned char)204;
long long int var_15 = -7518731852869584642LL;
unsigned char var_16 = (unsigned char)108;
unsigned long long int var_17 = 1888632632945652925ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)6010;
int var_19 = 823118504;
unsigned char var_20 = (unsigned char)146;
unsigned long long int var_21 = 4850660900804950393ULL;
unsigned long long int var_22 = 9721300503627795770ULL;
unsigned short var_23 = (unsigned short)20107;
unsigned char var_24 = (unsigned char)74;
unsigned short var_25 = (unsigned short)34520;
unsigned int var_26 = 619695590U;
unsigned long long int var_27 = 16395155553605872789ULL;
unsigned int var_28 = 613036460U;
signed char var_29 = (signed char)-7;
unsigned int var_30 = 592284958U;
int var_31 = 667159521;
unsigned char var_32 = (unsigned char)232;
short var_33 = (short)-16134;
_Bool var_34 = (_Bool)0;
signed char arr_1 [25] ;
int arr_4 [24] ;
signed char arr_6 [24] ;
signed char arr_7 [24] ;
short arr_10 [24] ;
signed char arr_13 [24] [24] ;
short arr_14 [24] [24] [24] ;
int arr_15 [24] [24] ;
unsigned char arr_17 [24] [24] [24] [24] ;
unsigned char arr_30 [24] [24] [24] ;
short arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
unsigned char arr_11 [24] [24] [24] ;
long long int arr_20 [24] [24] ;
short arr_26 [24] [24] [24] [24] ;
unsigned long long int arr_27 [24] ;
int arr_28 [24] ;
unsigned short arr_35 [24] [24] [24] ;
unsigned long long int arr_36 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 15605228;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)2822;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-26093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = -111484249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)30498;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = 4514252207861826198LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)15276 : (short)15215;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 13739185203178951736ULL : 934908917399950924ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 356482682 : 472535327;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)15570 : (unsigned short)64818;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 6703109760166273168ULL : 8488906330480327629ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
