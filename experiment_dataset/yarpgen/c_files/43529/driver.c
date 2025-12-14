#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1702206340;
unsigned short var_14 = (unsigned short)46579;
int zero = 0;
unsigned long long int var_18 = 15730077701512084782ULL;
unsigned char var_19 = (unsigned char)109;
int var_20 = 1110039508;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
