#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5349942232497279462LL;
unsigned char var_11 = (unsigned char)5;
unsigned char var_17 = (unsigned char)58;
int zero = 0;
long long int var_20 = -9075899634645302755LL;
short var_21 = (short)12350;
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
