#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25122;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)92;
unsigned long long int var_12 = 2163557692314191221ULL;
int zero = 0;
signed char var_14 = (signed char)-72;
int var_15 = 515777181;
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
