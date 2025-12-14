#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1636699100;
unsigned char var_6 = (unsigned char)59;
short var_7 = (short)14107;
unsigned long long int var_9 = 7994751653413053580ULL;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
short var_14 = (short)17093;
unsigned int var_15 = 2517739211U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
