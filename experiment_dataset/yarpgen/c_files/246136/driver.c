#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)114;
signed char var_3 = (signed char)55;
_Bool var_8 = (_Bool)1;
long long int var_9 = 216796427977588716LL;
int zero = 0;
signed char var_13 = (signed char)113;
long long int var_14 = 8454806854963123305LL;
unsigned int var_15 = 1284266133U;
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
