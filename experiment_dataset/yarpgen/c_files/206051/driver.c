#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35262;
int var_6 = -1837408488;
short var_9 = (short)-30820;
unsigned short var_10 = (unsigned short)34715;
unsigned short var_12 = (unsigned short)51888;
int zero = 0;
int var_13 = -804267737;
unsigned int var_14 = 1752912602U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
