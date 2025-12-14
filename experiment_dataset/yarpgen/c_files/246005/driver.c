#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
_Bool var_2 = (_Bool)1;
signed char var_7 = (signed char)-115;
int var_9 = 1224555290;
unsigned char var_13 = (unsigned char)246;
int zero = 0;
int var_16 = -599046919;
unsigned long long int var_17 = 1727361856905974454ULL;
signed char var_18 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
