#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14588823339625272657ULL;
unsigned short var_4 = (unsigned short)8012;
unsigned int var_11 = 1595218512U;
int zero = 0;
unsigned short var_12 = (unsigned short)8130;
unsigned long long int var_13 = 3343397032307995496ULL;
unsigned int var_14 = 1393527361U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
