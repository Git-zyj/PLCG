#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17517;
short var_1 = (short)-10325;
int var_3 = 837429672;
signed char var_9 = (signed char)89;
unsigned char var_10 = (unsigned char)15;
int var_12 = -819687226;
int zero = 0;
long long int var_15 = -8206099617416309894LL;
unsigned char var_16 = (unsigned char)160;
unsigned long long int var_17 = 14024187372302612804ULL;
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
