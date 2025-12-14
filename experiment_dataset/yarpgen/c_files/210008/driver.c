#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6874400947176420314LL;
long long int var_1 = -4740404967609051538LL;
long long int var_4 = -1753487177612337234LL;
signed char var_6 = (signed char)-47;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 666183127801973402ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
