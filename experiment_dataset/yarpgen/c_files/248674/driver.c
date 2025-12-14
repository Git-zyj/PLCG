#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6056;
long long int var_2 = 5197386437924660453LL;
short var_12 = (short)-32517;
int zero = 0;
unsigned long long int var_14 = 17879397546458912431ULL;
unsigned short var_15 = (unsigned short)7520;
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
