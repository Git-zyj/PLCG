#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
short var_12 = (short)-685;
long long int var_14 = -2491386857812739838LL;
short var_16 = (short)-18570;
int zero = 0;
unsigned char var_17 = (unsigned char)118;
unsigned char var_18 = (unsigned char)138;
signed char var_19 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
