#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)25427;
long long int var_6 = -7036457743521608586LL;
unsigned int var_7 = 1442409296U;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2428786859771919194LL;
unsigned int var_14 = 245544615U;
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
