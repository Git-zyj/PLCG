#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -114047852;
unsigned char var_4 = (unsigned char)190;
unsigned int var_6 = 3795337067U;
int zero = 0;
unsigned int var_13 = 495511816U;
int var_14 = -1064687592;
long long int var_15 = -2121862124813880074LL;
unsigned char var_16 = (unsigned char)245;
int var_17 = 2068887642;
unsigned long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7616867924715760428ULL;
}

void checksum() {
    hash(&seed, var_13);
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
