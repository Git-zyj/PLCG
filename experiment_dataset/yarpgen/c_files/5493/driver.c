#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21529;
signed char var_2 = (signed char)-104;
unsigned char var_3 = (unsigned char)11;
unsigned long long int var_5 = 16890017640236832517ULL;
signed char var_9 = (signed char)60;
signed char var_11 = (signed char)-85;
int zero = 0;
unsigned char var_12 = (unsigned char)200;
unsigned long long int var_13 = 6233727298886264227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
