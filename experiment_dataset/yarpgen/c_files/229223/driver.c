#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8706234571469400057LL;
unsigned short var_5 = (unsigned short)12005;
signed char var_14 = (signed char)52;
int zero = 0;
long long int var_18 = 2259497469711868896LL;
unsigned short var_19 = (unsigned short)60792;
int var_20 = -228533778;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
