#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22246;
long long int var_8 = 2046456908545143470LL;
int var_12 = 915049424;
signed char var_13 = (signed char)118;
int zero = 0;
long long int var_14 = -8181287549031174697LL;
long long int var_15 = 1216113681402114014LL;
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
