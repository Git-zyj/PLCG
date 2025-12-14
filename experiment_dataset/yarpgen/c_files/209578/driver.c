#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5727576530028368037LL;
unsigned int var_3 = 1269525035U;
unsigned short var_11 = (unsigned short)11532;
int zero = 0;
long long int var_12 = 5994128846808966085LL;
unsigned short var_13 = (unsigned short)28715;
void init() {
}

void checksum() {
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
