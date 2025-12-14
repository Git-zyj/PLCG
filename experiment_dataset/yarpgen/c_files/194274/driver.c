#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20819;
signed char var_7 = (signed char)-30;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 10485739768342239001ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3483875644429813302ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
