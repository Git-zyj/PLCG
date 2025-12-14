#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3588;
short var_3 = (short)15813;
_Bool var_4 = (_Bool)1;
long long int var_8 = -2539575348725179922LL;
unsigned short var_9 = (unsigned short)24555;
int zero = 0;
long long int var_10 = -4826573933842820810LL;
unsigned int var_11 = 4223460776U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
