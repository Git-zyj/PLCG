#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40599;
int var_2 = -727780800;
unsigned short var_3 = (unsigned short)63660;
unsigned int var_4 = 2602315521U;
int zero = 0;
long long int var_12 = -6613205105422945882LL;
unsigned int var_13 = 3253384291U;
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
