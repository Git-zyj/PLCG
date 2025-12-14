#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)66;
unsigned int var_6 = 4022992368U;
long long int var_11 = -111235942287765344LL;
signed char var_12 = (signed char)-16;
int zero = 0;
unsigned int var_16 = 4241817332U;
signed char var_17 = (signed char)5;
unsigned long long int var_18 = 2551859509185720647ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
