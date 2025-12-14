#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3947031983380593726ULL;
unsigned int var_7 = 1519513397U;
unsigned char var_9 = (unsigned char)247;
unsigned short var_14 = (unsigned short)51407;
int zero = 0;
unsigned short var_15 = (unsigned short)40940;
long long int var_16 = -6502224803153255042LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
