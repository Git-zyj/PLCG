#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2449710715154178993LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_8 = 12286055994552938738ULL;
unsigned long long int var_10 = 12145850531870549647ULL;
int var_11 = -2125398900;
int zero = 0;
unsigned short var_14 = (unsigned short)5672;
unsigned char var_15 = (unsigned char)41;
unsigned int var_16 = 601746653U;
unsigned char var_17 = (unsigned char)113;
unsigned long long int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 10845233904167734414ULL;
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
