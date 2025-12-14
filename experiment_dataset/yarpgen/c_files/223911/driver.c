#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 49864007;
int var_1 = -740443838;
int var_4 = -72670552;
int var_7 = -850466281;
int var_9 = 1901067107;
int var_10 = -1236904204;
int zero = 0;
int var_14 = -1300863680;
int var_15 = 411223499;
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
