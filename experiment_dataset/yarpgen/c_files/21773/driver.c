#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19794;
signed char var_2 = (signed char)-100;
int var_4 = -1954306669;
int var_6 = 671518529;
unsigned char var_7 = (unsigned char)235;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)19;
short var_11 = (short)8140;
int zero = 0;
unsigned short var_18 = (unsigned short)57808;
unsigned long long int var_19 = 2916456684091223048ULL;
long long int var_20 = -6801042409910481947LL;
unsigned short arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)35286;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
