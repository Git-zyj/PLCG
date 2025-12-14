#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48510;
unsigned long long int var_6 = 15315393371326365843ULL;
short var_9 = (short)11036;
long long int var_11 = -874420733968736451LL;
int zero = 0;
unsigned int var_13 = 3947361759U;
long long int var_14 = 1244339056663986091LL;
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
