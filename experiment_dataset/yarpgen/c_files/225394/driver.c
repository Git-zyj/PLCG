#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4396;
unsigned char var_7 = (unsigned char)233;
unsigned long long int var_8 = 17605542277645802309ULL;
int zero = 0;
int var_13 = 469148059;
unsigned short var_14 = (unsigned short)31669;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
