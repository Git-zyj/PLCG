#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -24096407490422682LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3330584281754932479LL;
int zero = 0;
unsigned long long int var_20 = 2419663040692116035ULL;
unsigned long long int var_21 = 8780776112658601993ULL;
unsigned char var_22 = (unsigned char)201;
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
