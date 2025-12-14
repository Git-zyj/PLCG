#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)51;
unsigned short var_11 = (unsigned short)20557;
unsigned long long int var_14 = 9423836373045287360ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
unsigned char var_20 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
