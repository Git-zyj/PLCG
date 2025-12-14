#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10291711532412275917ULL;
unsigned char var_3 = (unsigned char)183;
long long int var_7 = -6194572795017491155LL;
unsigned short var_10 = (unsigned short)45041;
long long int var_13 = 4499185533853464008LL;
int zero = 0;
unsigned long long int var_14 = 11532472602605510504ULL;
long long int var_15 = -2640556444756060053LL;
long long int var_16 = 7442674125889492345LL;
unsigned int var_17 = 218328552U;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 13217964103253456608ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)217;
}

void checksum() {
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
