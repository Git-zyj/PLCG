#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)56975;
long long int var_9 = 8656536547370459859LL;
signed char var_13 = (signed char)101;
int zero = 0;
unsigned long long int var_14 = 10198649565322053057ULL;
int var_15 = 991858743;
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
