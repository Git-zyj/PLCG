#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)42;
unsigned long long int var_15 = 11952592019133386439ULL;
unsigned short var_16 = (unsigned short)3284;
int zero = 0;
unsigned short var_20 = (unsigned short)31699;
unsigned long long int var_21 = 9821513320816727017ULL;
short var_22 = (short)-13083;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
