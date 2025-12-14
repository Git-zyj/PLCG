#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned char var_1 = (unsigned char)127;
int var_4 = -878229267;
signed char var_5 = (signed char)-60;
int var_7 = -1388335777;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
signed char var_15 = (signed char)-11;
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
