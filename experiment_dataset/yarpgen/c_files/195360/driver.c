#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-30;
unsigned char var_2 = (unsigned char)238;
signed char var_4 = (signed char)-115;
int var_9 = -1606094992;
int zero = 0;
int var_10 = 69241768;
unsigned long long int var_11 = 11251523226338575088ULL;
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
