#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2239040482419621673LL;
signed char var_5 = (signed char)-81;
long long int var_6 = -6072890317515922626LL;
signed char var_9 = (signed char)-10;
int zero = 0;
unsigned char var_10 = (unsigned char)74;
signed char var_11 = (signed char)21;
signed char var_12 = (signed char)74;
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
