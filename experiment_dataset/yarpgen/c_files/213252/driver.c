#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1539783437;
unsigned char var_4 = (unsigned char)76;
unsigned long long int var_8 = 10938770975680189427ULL;
short var_9 = (short)-29539;
int zero = 0;
unsigned char var_11 = (unsigned char)36;
_Bool var_12 = (_Bool)1;
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
