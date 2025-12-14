#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned char var_2 = (unsigned char)124;
unsigned long long int var_5 = 10168145601954438446ULL;
signed char var_8 = (signed char)113;
int zero = 0;
unsigned long long int var_10 = 6803191703788184322ULL;
unsigned short var_11 = (unsigned short)51648;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
