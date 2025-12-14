#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15699255992442448429ULL;
long long int var_4 = 5505402007143363023LL;
long long int var_6 = 7385430730077593012LL;
int var_7 = -1431231794;
unsigned short var_8 = (unsigned short)62533;
signed char var_10 = (signed char)-113;
int var_11 = 442678384;
signed char var_12 = (signed char)-124;
unsigned short var_13 = (unsigned short)17019;
int var_14 = -1829750358;
unsigned int var_15 = 72816363U;
short var_16 = (short)-29019;
unsigned short var_17 = (unsigned short)53430;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3508098598403642698ULL;
signed char var_20 = (signed char)74;
signed char var_21 = (signed char)-102;
signed char var_22 = (signed char)48;
long long int var_23 = -3067120820106883241LL;
int var_24 = 1489789779;
unsigned long long int var_25 = 12074776564897789972ULL;
int var_26 = 1604216325;
signed char var_27 = (signed char)-79;
short var_28 = (short)-400;
unsigned long long int var_29 = 1798235967914803655ULL;
short var_30 = (short)-8246;
unsigned long long int var_31 = 5684464667018239769ULL;
unsigned long long int var_32 = 3226899299950060476ULL;
signed char var_33 = (signed char)86;
signed char var_34 = (signed char)77;
long long int var_35 = -2311526256687557206LL;
unsigned int var_36 = 849401595U;
short var_37 = (short)30421;
unsigned short var_38 = (unsigned short)51244;
int var_39 = 1957276416;
signed char var_40 = (signed char)32;
long long int var_41 = 9098823562734124842LL;
signed char var_42 = (signed char)-8;
long long int var_43 = -4695604594857669440LL;
unsigned long long int arr_18 [16] [16] [16] [16] [16] [16] ;
long long int arr_22 [16] [16] [16] ;
unsigned char arr_26 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16162265436810218850ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 4292062027142095901LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)23;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
