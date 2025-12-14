#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 593258460U;
signed char var_5 = (signed char)-107;
int var_9 = 1840086522;
short var_10 = (short)-4653;
unsigned long long int var_12 = 6901635299553521540ULL;
int zero = 0;
long long int var_15 = 97342312307265582LL;
unsigned char var_16 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
