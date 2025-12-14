#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 3743040548938775079LL;
unsigned long long int var_11 = 16556410017042813114ULL;
int zero = 0;
long long int var_14 = -7252853018667232150LL;
unsigned char var_15 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
