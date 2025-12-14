#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 324389344U;
long long int var_10 = -5965260350358435549LL;
long long int var_11 = 6632999782283264800LL;
short var_16 = (short)4666;
int zero = 0;
unsigned short var_20 = (unsigned short)22934;
short var_21 = (short)-15624;
int var_22 = -444583429;
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
