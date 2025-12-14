#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15196;
int var_3 = 46854708;
unsigned char var_5 = (unsigned char)98;
unsigned char var_9 = (unsigned char)203;
int zero = 0;
unsigned char var_16 = (unsigned char)108;
long long int var_17 = -7571444680793243661LL;
void init() {
}

void checksum() {
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
