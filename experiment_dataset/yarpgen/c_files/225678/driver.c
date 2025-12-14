#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1481853302U;
unsigned short var_3 = (unsigned short)6243;
signed char var_5 = (signed char)46;
long long int var_9 = 6220333660190831148LL;
int zero = 0;
long long int var_10 = 7042035545343871242LL;
unsigned short var_11 = (unsigned short)26076;
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
