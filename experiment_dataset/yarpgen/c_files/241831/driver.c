#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4806900973936747964LL;
unsigned short var_1 = (unsigned short)56582;
signed char var_2 = (signed char)10;
signed char var_3 = (signed char)64;
long long int var_4 = 987548887701417775LL;
unsigned long long int var_5 = 6378616866948141352ULL;
unsigned short var_9 = (unsigned short)49156;
unsigned int var_10 = 2035888752U;
long long int var_11 = -8127989651522969520LL;
int var_12 = -1810802043;
signed char var_13 = (signed char)-14;
signed char var_14 = (signed char)89;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 448453798;
unsigned int var_18 = 3244390595U;
int var_19 = -1433211757;
int var_20 = 34960603;
long long int var_21 = 4490401562791889704LL;
unsigned char arr_2 [25] ;
unsigned char arr_4 [25] [25] ;
unsigned char arr_8 [25] [25] [25] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)37;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
