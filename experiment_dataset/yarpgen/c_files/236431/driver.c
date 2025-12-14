#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13494251277974373007ULL;
unsigned char var_9 = (unsigned char)222;
unsigned long long int var_11 = 248393779901559935ULL;
signed char var_14 = (signed char)61;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)24;
signed char var_17 = (signed char)-51;
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
