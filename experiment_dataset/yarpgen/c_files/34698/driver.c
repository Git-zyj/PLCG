#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned long long int var_1 = 11354408071993604251ULL;
unsigned char var_2 = (unsigned char)96;
short var_3 = (short)-22350;
unsigned long long int var_4 = 8352963989294893529ULL;
unsigned int var_7 = 1794495622U;
unsigned char var_9 = (unsigned char)226;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
