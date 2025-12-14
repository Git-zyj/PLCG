#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8716438357077940126LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7629290469359339177LL;
long long int var_6 = -7728289939793183345LL;
unsigned long long int var_8 = 1532570755403568856ULL;
int zero = 0;
int var_10 = -263870392;
int var_11 = 991227428;
signed char var_12 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
