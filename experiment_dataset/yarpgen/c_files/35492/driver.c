#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8342601051726226281ULL;
short var_2 = (short)-29447;
int zero = 0;
unsigned long long int var_20 = 16919005304520658926ULL;
unsigned long long int var_21 = 13514997733299882611ULL;
short var_22 = (short)10597;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
