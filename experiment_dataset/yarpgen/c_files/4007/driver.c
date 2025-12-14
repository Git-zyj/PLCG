#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27708;
signed char var_3 = (signed char)3;
unsigned char var_5 = (unsigned char)0;
unsigned short var_7 = (unsigned short)57214;
short var_8 = (short)481;
unsigned long long int var_9 = 4379027240222948761ULL;
short var_10 = (short)-32591;
long long int var_11 = -3778438153086365649LL;
unsigned short var_13 = (unsigned short)61865;
unsigned int var_14 = 1273374012U;
unsigned int var_15 = 663414227U;
signed char var_16 = (signed char)126;
unsigned long long int var_18 = 12145254512955263628ULL;
int zero = 0;
short var_19 = (short)10988;
unsigned long long int var_20 = 16442296816016768502ULL;
signed char var_21 = (signed char)-99;
unsigned long long int var_22 = 2885756608475869036ULL;
unsigned short var_23 = (unsigned short)35927;
unsigned long long int var_24 = 2685170925119674597ULL;
unsigned int var_25 = 975316290U;
unsigned short var_26 = (unsigned short)60746;
signed char var_27 = (signed char)-97;
unsigned long long int var_28 = 2699867905091955026ULL;
unsigned int var_29 = 1754506406U;
signed char var_30 = (signed char)56;
unsigned short arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned int arr_3 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned short arr_11 [10] [10] [10] [10] ;
signed char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20911;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 905249910U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)32454;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)58138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-107;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
