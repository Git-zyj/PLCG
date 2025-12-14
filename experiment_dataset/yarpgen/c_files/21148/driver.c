#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1427811235;
unsigned int var_5 = 3468963142U;
unsigned int var_7 = 3647951611U;
int var_9 = 459549415;
unsigned char var_11 = (unsigned char)52;
int zero = 0;
signed char var_14 = (signed char)-123;
unsigned int var_15 = 1889085940U;
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
