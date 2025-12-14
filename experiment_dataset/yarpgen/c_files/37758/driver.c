#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)190;
unsigned int var_10 = 3093549353U;
unsigned short var_11 = (unsigned short)42800;
int zero = 0;
short var_14 = (short)-8515;
long long int var_15 = -829075407069814668LL;
signed char var_16 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
