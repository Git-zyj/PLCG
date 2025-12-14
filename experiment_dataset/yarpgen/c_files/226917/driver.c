#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 417374464;
unsigned char var_7 = (unsigned char)78;
unsigned long long int var_13 = 2636805076139997325ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)20196;
unsigned int var_18 = 447406359U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
