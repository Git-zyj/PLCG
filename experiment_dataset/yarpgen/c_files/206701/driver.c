#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26073;
int var_4 = -1359857114;
unsigned long long int var_5 = 5743666982700654741ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)33093;
signed char var_18 = (signed char)-82;
signed char var_19 = (signed char)-33;
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
