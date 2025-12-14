#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7347429059336391486LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-114;
unsigned int var_10 = 3597031934U;
int zero = 0;
long long int var_16 = 8754883368403807114LL;
unsigned long long int var_17 = 17676289847169563923ULL;
void init() {
}

void checksum() {
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
