#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-26706;
unsigned long long int var_7 = 430501479214908142ULL;
signed char var_15 = (signed char)85;
int zero = 0;
unsigned long long int var_19 = 8794025557464670193ULL;
int var_20 = -870940900;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
