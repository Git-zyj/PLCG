#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49204;
unsigned char var_7 = (unsigned char)33;
unsigned char var_9 = (unsigned char)247;
int zero = 0;
unsigned long long int var_15 = 14051519283845848861ULL;
unsigned short var_16 = (unsigned short)19926;
long long int var_17 = 241282349260887068LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
