#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1999931205016213536ULL;
long long int var_12 = 315391649268196543LL;
int zero = 0;
unsigned char var_20 = (unsigned char)196;
unsigned int var_21 = 2655285251U;
unsigned long long int var_22 = 10067683319354240463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
