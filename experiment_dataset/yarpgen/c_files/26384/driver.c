#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3051866692U;
short var_5 = (short)1317;
unsigned long long int var_7 = 6180298325262801778ULL;
unsigned int var_15 = 3074097272U;
int zero = 0;
long long int var_16 = 8435786879003127777LL;
unsigned int var_17 = 1228775590U;
unsigned int var_18 = 761343085U;
unsigned short var_19 = (unsigned short)14768;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 483306786U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
