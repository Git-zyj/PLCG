#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1792794293035926268LL;
unsigned long long int var_4 = 15651713915449047665ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_14 = 336272017;
int zero = 0;
signed char var_15 = (signed char)38;
unsigned int var_16 = 3692527352U;
unsigned char var_17 = (unsigned char)1;
unsigned char var_18 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
