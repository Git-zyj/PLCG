#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 79830853;
unsigned long long int var_4 = 17504308909178127057ULL;
int var_9 = -1774489909;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 254473271U;
short var_15 = (short)14072;
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
