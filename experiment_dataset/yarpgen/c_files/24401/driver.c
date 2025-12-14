#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2566370700827650234LL;
signed char var_13 = (signed char)52;
unsigned int var_14 = 399842662U;
int zero = 0;
int var_15 = 729494911;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17376603299949410749ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
