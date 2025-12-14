#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46571;
unsigned long long int var_6 = 12763151991057917534ULL;
int var_8 = -1942335707;
unsigned int var_9 = 1517128371U;
_Bool var_11 = (_Bool)1;
int var_12 = -488203937;
int zero = 0;
unsigned int var_17 = 2950749833U;
int var_18 = -846895492;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)62529;
void init() {
}

void checksum() {
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
