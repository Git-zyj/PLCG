#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3857141532884761211LL;
signed char var_3 = (signed char)-21;
int zero = 0;
unsigned long long int var_12 = 10102505885644678011ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2759299254U;
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
