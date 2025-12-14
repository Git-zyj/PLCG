#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13735375350973045098ULL;
short var_5 = (short)4492;
short var_8 = (short)-13351;
long long int var_9 = 1456550104495768475LL;
unsigned int var_10 = 3442159219U;
short var_12 = (short)24107;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
int var_15 = -1344725919;
void init() {
}

void checksum() {
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
