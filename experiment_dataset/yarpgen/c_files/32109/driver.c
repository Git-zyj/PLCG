#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52542;
int var_1 = 1378149962;
unsigned char var_2 = (unsigned char)56;
unsigned long long int var_3 = 14291040349584866410ULL;
signed char var_4 = (signed char)34;
short var_5 = (short)-27703;
unsigned long long int var_6 = 7357265241502357195ULL;
unsigned long long int var_7 = 16202601347166365625ULL;
signed char var_8 = (signed char)-11;
long long int var_10 = 5726619794076166643LL;
unsigned long long int var_11 = 17322453081911162092ULL;
long long int var_12 = -8602275001819985227LL;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned int var_14 = 1599821206U;
signed char var_15 = (signed char)98;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 13361718685063129407ULL;
unsigned int var_18 = 147421226U;
signed char var_19 = (signed char)88;
signed char arr_22 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)79;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
