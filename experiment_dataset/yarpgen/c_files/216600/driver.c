#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5955537230825624163LL;
int var_4 = -846042888;
unsigned int var_5 = 1358274446U;
long long int var_7 = 8800586341402243234LL;
int zero = 0;
unsigned long long int var_14 = 8315072655850331428ULL;
short var_15 = (short)-20918;
unsigned short var_16 = (unsigned short)51137;
signed char var_17 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
