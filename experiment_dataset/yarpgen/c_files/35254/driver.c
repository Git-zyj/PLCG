#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
long long int var_1 = 8837110604027116753LL;
signed char var_2 = (signed char)-60;
unsigned int var_8 = 823768590U;
int var_14 = 845928208;
short var_15 = (short)-5589;
int var_16 = -441202677;
int zero = 0;
long long int var_17 = -7526522517210201593LL;
unsigned long long int var_18 = 14424815940830310768ULL;
int var_19 = -199003395;
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
