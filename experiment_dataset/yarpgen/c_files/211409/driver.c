#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)16051;
unsigned char var_9 = (unsigned char)36;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 8373603033695112434ULL;
unsigned char var_18 = (unsigned char)38;
void init() {
}

void checksum() {
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
