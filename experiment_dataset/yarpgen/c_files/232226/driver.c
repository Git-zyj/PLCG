#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1591869451;
unsigned short var_5 = (unsigned short)5314;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-24;
unsigned long long int var_9 = 9203149646104017041ULL;
int var_10 = -68546364;
int zero = 0;
int var_12 = 276899338;
unsigned long long int var_13 = 17417557462902381339ULL;
int var_14 = -1522677576;
unsigned short var_15 = (unsigned short)34648;
unsigned long long int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 10569538669313197797ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
