#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = 66650966;
unsigned char var_9 = (unsigned char)236;
unsigned long long int var_11 = 14004209589802197217ULL;
int zero = 0;
signed char var_15 = (signed char)-56;
unsigned char var_16 = (unsigned char)163;
unsigned long long int var_17 = 7413234403648062459ULL;
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
