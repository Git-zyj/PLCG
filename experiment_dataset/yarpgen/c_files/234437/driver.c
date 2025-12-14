#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15879;
short var_6 = (short)-4895;
signed char var_8 = (signed char)26;
short var_9 = (short)-228;
int zero = 0;
unsigned long long int var_15 = 10317030201604084516ULL;
unsigned short var_16 = (unsigned short)2682;
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
