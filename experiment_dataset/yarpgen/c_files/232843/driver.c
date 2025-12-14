#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned int var_3 = 3858290653U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-92;
unsigned int var_7 = 596163010U;
unsigned long long int var_8 = 12390237305231036946ULL;
int var_9 = -1761853181;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
