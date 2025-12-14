#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1468055517;
unsigned int var_3 = 3937523021U;
long long int var_4 = -8953983007756531370LL;
unsigned char var_11 = (unsigned char)107;
int zero = 0;
short var_20 = (short)-2907;
unsigned long long int var_21 = 4227428359552750126ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
