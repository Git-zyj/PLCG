#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9123680087480253262LL;
long long int var_8 = 535549917340290184LL;
long long int var_10 = -7995393577914445928LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7999308598339297341LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
