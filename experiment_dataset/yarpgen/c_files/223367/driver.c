#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_3 = 1005479916U;
signed char var_7 = (signed char)-29;
unsigned long long int var_11 = 9948373220238469787ULL;
long long int var_12 = 5060313100759280343LL;
int zero = 0;
unsigned long long int var_13 = 12302154151732250495ULL;
int var_14 = -1954798754;
void init() {
}

void checksum() {
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
