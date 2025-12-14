#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4178812616841729910ULL;
short var_6 = (short)-7295;
long long int var_8 = 8737894547935651320LL;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
long long int var_11 = 5489527183360787922LL;
signed char var_12 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
