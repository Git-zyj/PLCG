#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59303;
long long int var_3 = -6683368546608824063LL;
int var_6 = -1528037306;
unsigned long long int var_9 = 12763109182860715648ULL;
unsigned long long int var_12 = 1697503957406289370ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)27870;
unsigned int var_14 = 2859009131U;
unsigned char var_15 = (unsigned char)51;
short var_16 = (short)3851;
short var_17 = (short)-4122;
unsigned long long int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2892590577409139867ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)54428;
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
