#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)229;
long long int var_7 = -91474244881418054LL;
signed char var_9 = (signed char)52;
unsigned int var_11 = 2813245267U;
int zero = 0;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)58;
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
