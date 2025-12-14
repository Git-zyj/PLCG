#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3347982214U;
long long int var_3 = 6194357586318392978LL;
int var_5 = -822782545;
unsigned long long int var_10 = 17804735929962552881ULL;
signed char var_11 = (signed char)-121;
int zero = 0;
int var_13 = -1609365368;
short var_14 = (short)-1475;
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
