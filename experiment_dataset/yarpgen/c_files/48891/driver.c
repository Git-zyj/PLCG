#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -9004519373847822161LL;
long long int var_7 = 2464743246389879884LL;
signed char var_11 = (signed char)-93;
int zero = 0;
signed char var_13 = (signed char)-104;
long long int var_14 = 454921084438308869LL;
void init() {
}

void checksum() {
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
