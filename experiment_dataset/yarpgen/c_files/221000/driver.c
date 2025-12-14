#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1688594298;
int var_6 = -654259612;
long long int var_13 = -247063080193513066LL;
int zero = 0;
short var_15 = (short)-287;
unsigned short var_16 = (unsigned short)46211;
unsigned long long int var_17 = 7626528193988781811ULL;
unsigned long long int var_18 = 2283464167757451530ULL;
unsigned long long int var_19 = 17206463361530785716ULL;
unsigned long long int var_20 = 2802395393762949787ULL;
unsigned char var_21 = (unsigned char)202;
long long int arr_1 [24] [24] ;
_Bool arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 825268411900443179LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
