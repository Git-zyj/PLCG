#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 214180282210525130ULL;
int var_7 = 134439503;
unsigned char var_11 = (unsigned char)188;
int zero = 0;
unsigned short var_19 = (unsigned short)13288;
unsigned long long int var_20 = 18138528644037811576ULL;
int var_21 = 986694112;
void init() {
}

void checksum() {
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
