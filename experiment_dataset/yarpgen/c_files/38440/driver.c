#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1355265192U;
unsigned long long int var_6 = 17488784528771934712ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 3605185698U;
short var_15 = (short)-8170;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
