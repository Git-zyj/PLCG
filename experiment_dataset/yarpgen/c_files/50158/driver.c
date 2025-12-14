#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31765;
int var_2 = 523207174;
long long int var_3 = -1406589446467706812LL;
int var_8 = -1313721503;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
unsigned int var_16 = 3870658144U;
unsigned char var_17 = (unsigned char)111;
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
