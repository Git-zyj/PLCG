#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31790;
unsigned int var_11 = 2605551364U;
int zero = 0;
unsigned int var_18 = 118297909U;
unsigned short var_19 = (unsigned short)26476;
signed char var_20 = (signed char)36;
unsigned char var_21 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
