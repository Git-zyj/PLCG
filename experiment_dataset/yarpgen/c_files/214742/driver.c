#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21126;
unsigned long long int var_2 = 4089541673631288636ULL;
short var_6 = (short)27631;
int zero = 0;
unsigned long long int var_14 = 14183926242197177715ULL;
short var_15 = (short)31632;
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
