#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1583;
unsigned short var_5 = (unsigned short)38060;
unsigned long long int var_16 = 1321923517872279843ULL;
unsigned int var_17 = 258325196U;
int zero = 0;
unsigned int var_20 = 3024301248U;
unsigned char var_21 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
