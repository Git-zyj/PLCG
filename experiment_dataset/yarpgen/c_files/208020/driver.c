#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_11 = -5620183317125083592LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 18116631907971153961ULL;
signed char var_14 = (signed char)-97;
int var_15 = 917146640;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
