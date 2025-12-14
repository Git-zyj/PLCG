#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 603640491U;
unsigned short var_2 = (unsigned short)38799;
unsigned int var_3 = 2518547153U;
int var_5 = -1270545277;
long long int var_7 = -6101103979275476436LL;
unsigned int var_8 = 1129561644U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2263114035U;
int zero = 0;
int var_12 = 1941150026;
unsigned short var_13 = (unsigned short)39015;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)44;
int var_16 = 1463750188;
unsigned short var_17 = (unsigned short)52736;
long long int var_18 = 8537182522061850851LL;
unsigned short var_19 = (unsigned short)32469;
unsigned short var_20 = (unsigned short)34495;
unsigned int arr_4 [10] [10] ;
unsigned int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1875637211U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 4156302316U : 3499530277U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
