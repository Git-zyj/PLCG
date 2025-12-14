#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7523323287277939467LL;
short var_9 = (short)-8181;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1491940277;
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
