#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19921;
int var_2 = 1719794136;
signed char var_4 = (signed char)-120;
signed char var_7 = (signed char)-94;
long long int var_8 = -6841094668848823915LL;
signed char var_9 = (signed char)-85;
unsigned int var_11 = 1198538633U;
long long int var_13 = 7011659196041228968LL;
long long int var_14 = 4711693046114108020LL;
long long int var_15 = -2683372316908899293LL;
long long int var_17 = 1830569086459034370LL;
int zero = 0;
long long int var_18 = -8697234000338112195LL;
unsigned short var_19 = (unsigned short)1369;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4419150477366520647LL;
long long int var_22 = 2042821402974315631LL;
signed char var_23 = (signed char)101;
short arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-7897;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2228744755161880773ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
