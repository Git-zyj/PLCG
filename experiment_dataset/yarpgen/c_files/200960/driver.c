#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11995482626039671335ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)33955;
int zero = 0;
unsigned long long int var_12 = 13554262604225121338ULL;
unsigned long long int var_13 = 3080035429528201357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
