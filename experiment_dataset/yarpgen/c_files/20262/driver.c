#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32594;
unsigned short var_4 = (unsigned short)39044;
int var_5 = 735306613;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)56;
signed char var_10 = (signed char)-32;
unsigned long long int var_11 = 4760561177595486550ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)18320;
unsigned int var_14 = 168192753U;
unsigned int var_15 = 1022416199U;
short var_16 = (short)-7527;
short var_17 = (short)4405;
unsigned long long int var_18 = 14574806009432040104ULL;
short var_19 = (short)-7086;
unsigned int arr_1 [13] ;
signed char arr_2 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
signed char arr_5 [10] [10] ;
int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2972918954U : 115551079U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)6 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11517260303719286403ULL : 7256673603716691557ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 995127518 : -330877337;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
