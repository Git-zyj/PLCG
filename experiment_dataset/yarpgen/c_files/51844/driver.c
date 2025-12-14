#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1321799873U;
signed char var_3 = (signed char)-12;
unsigned short var_4 = (unsigned short)31841;
long long int var_9 = 660795953003045429LL;
int zero = 0;
unsigned int var_12 = 1084298922U;
int var_13 = 1117475352;
unsigned char var_14 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
