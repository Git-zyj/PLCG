#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43526;
unsigned char var_5 = (unsigned char)51;
unsigned char var_7 = (unsigned char)205;
unsigned char var_8 = (unsigned char)52;
unsigned long long int var_12 = 13394501315078777896ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1695;
unsigned char var_17 = (unsigned char)225;
unsigned char var_18 = (unsigned char)136;
unsigned short var_19 = (unsigned short)44802;
long long int var_20 = 1757004269258226LL;
unsigned long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 16829581370945731274ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
