#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 2546670499492184897ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10691900441110922164ULL;
short var_17 = (short)-18950;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
unsigned long long int var_19 = 17410187106026710090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
