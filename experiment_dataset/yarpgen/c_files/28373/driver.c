#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16187;
unsigned short var_9 = (unsigned short)24860;
short var_10 = (short)-4002;
unsigned int var_11 = 1058605105U;
unsigned short var_13 = (unsigned short)47016;
int zero = 0;
unsigned long long int var_19 = 3247548480118692041ULL;
unsigned long long int var_20 = 1981805200525662600ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
