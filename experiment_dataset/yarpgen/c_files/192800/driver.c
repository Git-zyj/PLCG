#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned long long int var_1 = 3765611465279757083ULL;
unsigned char var_5 = (unsigned char)31;
unsigned long long int var_8 = 3028353340524890022ULL;
int var_9 = 1759953881;
signed char var_11 = (signed char)61;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
unsigned char var_15 = (unsigned char)182;
void init() {
}

void checksum() {
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
