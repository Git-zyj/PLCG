#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)13;
long long int var_3 = -5672354089701340922LL;
unsigned long long int var_11 = 13444283893616444282ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)83;
unsigned char var_19 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
