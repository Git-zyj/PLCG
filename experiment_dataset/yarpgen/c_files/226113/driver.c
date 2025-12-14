#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1333413902583567867LL;
unsigned short var_9 = (unsigned short)31819;
long long int var_11 = 4518394998211746996LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)28;
unsigned short var_15 = (unsigned short)32471;
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
