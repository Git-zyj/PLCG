#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 796163985U;
long long int var_6 = 7988457109592285805LL;
unsigned char var_7 = (unsigned char)110;
unsigned long long int var_12 = 8424146200707202924ULL;
int zero = 0;
int var_13 = 46594315;
unsigned int var_14 = 4180519006U;
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
