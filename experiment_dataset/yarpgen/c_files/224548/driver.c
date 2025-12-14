#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3220019368577415394LL;
int var_11 = 1529764367;
unsigned short var_15 = (unsigned short)33393;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)12314;
int var_18 = -438239466;
signed char var_19 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
