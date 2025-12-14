#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26237;
short var_4 = (short)24797;
short var_7 = (short)-31688;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
unsigned long long int var_13 = 5687816188015116230ULL;
signed char var_14 = (signed char)89;
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
