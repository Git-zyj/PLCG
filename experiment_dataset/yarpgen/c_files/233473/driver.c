#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)83;
unsigned long long int var_6 = 8364610782255626511ULL;
long long int var_7 = 5072962111626694318LL;
unsigned long long int var_8 = 9199317776794059168ULL;
unsigned char var_9 = (unsigned char)196;
int zero = 0;
unsigned char var_13 = (unsigned char)1;
unsigned char var_14 = (unsigned char)20;
unsigned char var_15 = (unsigned char)76;
void init() {
}

void checksum() {
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
