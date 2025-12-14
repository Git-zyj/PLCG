#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1001370493662168800LL;
int var_5 = 1192349391;
short var_8 = (short)-9956;
unsigned int var_9 = 1097257877U;
short var_12 = (short)22594;
unsigned long long int var_14 = 12373547042797522583ULL;
int zero = 0;
short var_17 = (short)29200;
long long int var_18 = -1760152740006026663LL;
unsigned int var_19 = 2484886088U;
long long int var_20 = -7680267530146933222LL;
long long int var_21 = 31294290895191708LL;
signed char var_22 = (signed char)-89;
short var_23 = (short)-28442;
unsigned long long int var_24 = 5348242346837541726ULL;
signed char var_25 = (signed char)76;
unsigned long long int var_26 = 620444331844403273ULL;
unsigned short arr_0 [19] ;
signed char arr_2 [19] [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)60248;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 4325006917530618622LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
