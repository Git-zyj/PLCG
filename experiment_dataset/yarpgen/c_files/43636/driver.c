#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2011830712U;
long long int var_1 = -6912029857586606971LL;
unsigned char var_2 = (unsigned char)195;
long long int var_3 = 2440541132852973104LL;
unsigned short var_4 = (unsigned short)17377;
signed char var_5 = (signed char)-17;
int var_6 = -458331668;
unsigned int var_7 = 2179719853U;
unsigned char var_8 = (unsigned char)159;
int var_9 = 1587440723;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3002721388U;
unsigned char var_12 = (unsigned char)101;
unsigned char var_13 = (unsigned char)36;
short var_14 = (short)-26477;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)252;
unsigned char var_17 = (unsigned char)174;
unsigned short var_18 = (unsigned short)555;
unsigned int var_19 = 2568242826U;
int zero = 0;
signed char var_20 = (signed char)58;
unsigned char var_21 = (unsigned char)88;
short var_22 = (short)30341;
long long int var_23 = 8641832424975124667LL;
unsigned char var_24 = (unsigned char)117;
int var_25 = -992536296;
unsigned long long int var_26 = 16884267288119767059ULL;
unsigned short var_27 = (unsigned short)18919;
short var_28 = (short)-8294;
unsigned char var_29 = (unsigned char)112;
unsigned short var_30 = (unsigned short)51751;
long long int var_31 = 5795386667345904221LL;
long long int arr_18 [25] [25] [25] [25] ;
unsigned int arr_19 [25] ;
unsigned int arr_46 [11] [11] [11] [11] [11] ;
unsigned int arr_47 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_48 [11] [11] [11] ;
long long int arr_53 [11] [11] [11] [11] [11] [11] ;
signed char arr_54 [11] ;
short arr_55 [11] ;
unsigned long long int arr_58 [16] ;
unsigned char arr_65 [16] ;
_Bool arr_66 [16] ;
short arr_67 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2862467741789343177LL : -4508521653705759564LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 709206893U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = 630164272U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3748617607U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 1640757396902015072ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3240925100507289295LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_54 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_55 [i_0] = (short)-11217;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_58 [i_0] = 8435163232281797273ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_65 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_66 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_67 [i_0] = (short)14444;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_67 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
