#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_6 = 4159436126U;
unsigned char var_9 = (unsigned char)51;
int zero = 0;
unsigned char var_10 = (unsigned char)214;
unsigned long long int var_11 = 9508009184479752732ULL;
short var_12 = (short)-13440;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
