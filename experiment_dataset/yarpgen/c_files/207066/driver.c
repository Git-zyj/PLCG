#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2460589012319518128ULL;
long long int var_4 = -7698580597727673023LL;
unsigned char var_8 = (unsigned char)238;
long long int var_9 = -4859999621566922607LL;
unsigned char var_10 = (unsigned char)80;
int zero = 0;
unsigned char var_11 = (unsigned char)50;
int var_12 = 124938031;
unsigned long long int var_13 = 2061384759180550545ULL;
long long int var_14 = -6030072000184097245LL;
unsigned char var_15 = (unsigned char)93;
unsigned char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)205;
}

void checksum() {
    hash(&seed, var_11);
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
