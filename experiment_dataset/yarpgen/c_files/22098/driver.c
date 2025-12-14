#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1593300400;
unsigned char var_10 = (unsigned char)193;
long long int var_12 = -4933187106307838088LL;
int var_15 = -2094899357;
int zero = 0;
unsigned long long int var_20 = 11699622573903025683ULL;
unsigned long long int var_21 = 4428308210565781ULL;
unsigned long long int var_22 = 2930951570255671006ULL;
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
