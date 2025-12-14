#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2849963888877908067LL;
long long int var_7 = -3535062428412786161LL;
unsigned int var_8 = 1674373069U;
unsigned int var_9 = 1233888318U;
int zero = 0;
unsigned char var_11 = (unsigned char)208;
unsigned short var_12 = (unsigned short)24614;
long long int var_13 = -3993410703252136104LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
