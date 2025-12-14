#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
unsigned char var_5 = (unsigned char)72;
short var_6 = (short)-24551;
unsigned int var_9 = 2578318283U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1837315976;
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
