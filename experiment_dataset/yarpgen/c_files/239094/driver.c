#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)67;
long long int var_9 = -3055021297974285651LL;
long long int var_11 = -803724368222957118LL;
int zero = 0;
unsigned short var_14 = (unsigned short)45148;
unsigned char var_15 = (unsigned char)1;
short var_16 = (short)23079;
unsigned char var_17 = (unsigned char)79;
int arr_1 [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -318859533;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5546602461744122628LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
