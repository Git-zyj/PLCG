#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8614050924546158283ULL;
_Bool var_6 = (_Bool)1;
int var_8 = -1742049301;
int zero = 0;
unsigned char var_12 = (unsigned char)37;
unsigned int var_13 = 2424560846U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
