#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5675730635560686282LL;
unsigned int var_4 = 99871304U;
unsigned char var_6 = (unsigned char)207;
int zero = 0;
long long int var_17 = -957348931652351627LL;
unsigned int var_18 = 1932601888U;
int var_19 = 1757534404;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
