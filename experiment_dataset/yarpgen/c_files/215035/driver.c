#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6917780038807734446ULL;
signed char var_3 = (signed char)91;
int var_4 = -1446354160;
int var_8 = -2083792857;
int zero = 0;
int var_11 = -799348867;
int var_12 = -508565454;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
