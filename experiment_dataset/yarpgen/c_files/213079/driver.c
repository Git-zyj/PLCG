#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5359916583913394557LL;
int var_8 = 346374091;
unsigned int var_9 = 2825214146U;
short var_10 = (short)-2106;
int zero = 0;
unsigned char var_14 = (unsigned char)127;
unsigned long long int var_15 = 16476256796987342600ULL;
short var_16 = (short)18552;
unsigned int var_17 = 2298719402U;
short var_18 = (short)8456;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
