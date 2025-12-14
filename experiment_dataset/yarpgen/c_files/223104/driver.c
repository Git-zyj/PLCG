#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)62;
long long int var_12 = -7600460632882399445LL;
long long int var_14 = 6922465193000768485LL;
long long int var_16 = -6902378367499433240LL;
int zero = 0;
unsigned char var_19 = (unsigned char)217;
unsigned int var_20 = 678027036U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
