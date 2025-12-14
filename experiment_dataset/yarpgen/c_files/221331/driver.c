#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1091242242U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3184894393U;
int zero = 0;
unsigned short var_13 = (unsigned short)21632;
unsigned long long int var_14 = 17388918339757452300ULL;
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
