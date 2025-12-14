#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)80;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)110;
long long int var_11 = -5931180736015893128LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
