#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6041767719043915646LL;
long long int var_3 = 6262295419248553087LL;
unsigned char var_5 = (unsigned char)109;
int var_7 = 457831125;
long long int var_8 = -1693662856265579843LL;
int zero = 0;
long long int var_13 = -7100144274115801965LL;
unsigned char var_14 = (unsigned char)253;
long long int var_15 = -3780364657490302024LL;
unsigned long long int var_16 = 14795996490992584554ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
