#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7868408089327381360LL;
int var_4 = -1059217531;
long long int var_5 = 476995504975835736LL;
_Bool var_8 = (_Bool)0;
int var_9 = 633883881;
int zero = 0;
long long int var_10 = -6098130612296422882LL;
signed char var_11 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
