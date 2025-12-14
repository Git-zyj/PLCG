#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -860556377926219518LL;
unsigned int var_3 = 3147625259U;
long long int var_9 = 6598351822160503848LL;
short var_14 = (short)-15932;
int zero = 0;
unsigned char var_16 = (unsigned char)75;
int var_17 = -15331523;
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
