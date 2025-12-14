#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-108;
long long int var_7 = -7132188028866874881LL;
unsigned char var_15 = (unsigned char)134;
int zero = 0;
unsigned short var_19 = (unsigned short)29906;
unsigned long long int var_20 = 5173229510126359430ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
