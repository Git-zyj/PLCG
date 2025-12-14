#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3039;
short var_3 = (short)19160;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
int var_12 = -505612914;
int var_13 = -2052186385;
short var_14 = (short)5973;
short var_15 = (short)-10556;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
