#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-26706;
unsigned char var_7 = (unsigned char)249;
unsigned long long int var_9 = 10082696271826600255ULL;
int zero = 0;
unsigned long long int var_15 = 10802647342648416478ULL;
unsigned long long int var_16 = 3047146686962998779ULL;
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
