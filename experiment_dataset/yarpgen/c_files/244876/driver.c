#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 706877474397311537ULL;
int var_5 = -2084187399;
unsigned int var_6 = 2728057545U;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)27;
unsigned char var_13 = (unsigned char)16;
long long int var_14 = 7256994601022269089LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
