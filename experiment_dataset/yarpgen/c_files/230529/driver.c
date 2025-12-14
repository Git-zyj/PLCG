#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3762698921861357602LL;
int var_6 = 1625609912;
unsigned int var_8 = 3733559990U;
unsigned char var_9 = (unsigned char)215;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 1398225368;
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
