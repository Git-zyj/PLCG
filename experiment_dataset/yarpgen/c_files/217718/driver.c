#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1696613000639384939ULL;
unsigned char var_3 = (unsigned char)142;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 5161265405601725160ULL;
unsigned long long int var_6 = 1186678720152868644ULL;
int zero = 0;
int var_13 = 703019208;
_Bool var_14 = (_Bool)0;
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
