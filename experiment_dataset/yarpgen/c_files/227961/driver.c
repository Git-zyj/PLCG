#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3611159108697545836LL;
short var_7 = (short)-32597;
unsigned char var_9 = (unsigned char)24;
unsigned int var_11 = 15456032U;
int zero = 0;
long long int var_12 = 6972942821730677176LL;
long long int var_13 = -4064951464399541740LL;
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
