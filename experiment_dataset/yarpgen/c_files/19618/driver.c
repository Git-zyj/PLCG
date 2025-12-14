#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13771880039045320966ULL;
signed char var_7 = (signed char)-23;
unsigned char var_11 = (unsigned char)5;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
long long int var_14 = -2628487143690185934LL;
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
