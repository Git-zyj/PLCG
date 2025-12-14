#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
int var_4 = 2028236761;
long long int var_8 = -962120903553523769LL;
signed char var_10 = (signed char)-98;
long long int var_11 = 3031513538178247979LL;
unsigned int var_12 = 3612313946U;
int var_13 = 1789729125;
unsigned int var_14 = 982906369U;
unsigned int var_15 = 175261359U;
int zero = 0;
long long int var_16 = -8319061281185309482LL;
unsigned char var_17 = (unsigned char)33;
int var_18 = -1243846889;
unsigned long long int var_19 = 549821623376329482ULL;
long long int var_20 = -4281876286190901591LL;
long long int var_21 = -601169700432814185LL;
unsigned int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned int arr_3 [14] [14] ;
signed char arr_4 [14] [14] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2272898743U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 15047806666391642706ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2156925518U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2294948395U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
