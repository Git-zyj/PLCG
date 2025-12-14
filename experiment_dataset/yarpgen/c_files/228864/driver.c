#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)223;
unsigned long long int var_7 = 1395948848310442336ULL;
long long int var_11 = -2804204471557678667LL;
unsigned char var_12 = (unsigned char)221;
int zero = 0;
long long int var_13 = -8578921073225661495LL;
long long int var_14 = -2659165098672462208LL;
unsigned char var_15 = (unsigned char)76;
unsigned char var_16 = (unsigned char)76;
unsigned char var_17 = (unsigned char)49;
int var_18 = 1042674956;
unsigned int arr_0 [19] ;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3683877227U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)7478;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
