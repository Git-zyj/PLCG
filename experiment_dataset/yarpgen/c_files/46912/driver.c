#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4477645063657439603LL;
short var_1 = (short)26740;
unsigned long long int var_2 = 13754664558161766060ULL;
long long int var_3 = 3314006132003728164LL;
short var_4 = (short)-5595;
unsigned long long int var_5 = 7269041818107008695ULL;
long long int var_6 = -6490237926029363722LL;
unsigned long long int var_7 = 7959043585302415904ULL;
unsigned char var_8 = (unsigned char)100;
long long int var_9 = 2094858723483457951LL;
short var_10 = (short)-24426;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7668888989474366451ULL;
unsigned long long int var_13 = 3985810884771020439ULL;
short var_14 = (short)21569;
unsigned long long int var_15 = 14100828898356113867ULL;
long long int var_16 = 3138544218869260715LL;
unsigned char arr_3 [21] ;
unsigned long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3374566703006257739ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
