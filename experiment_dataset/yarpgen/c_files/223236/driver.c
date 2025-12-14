#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
unsigned char var_4 = (unsigned char)208;
int var_9 = -2083000003;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-12324;
unsigned long long int var_17 = 10461123992244964844ULL;
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
