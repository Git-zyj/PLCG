#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3250969982U;
unsigned short var_5 = (unsigned short)19572;
signed char var_9 = (signed char)119;
unsigned char var_13 = (unsigned char)64;
int zero = 0;
short var_16 = (short)13918;
short var_17 = (short)-28134;
unsigned int var_18 = 2669888033U;
unsigned long long int var_19 = 5709528676378570024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
