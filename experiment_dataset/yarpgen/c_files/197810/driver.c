#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
long long int var_7 = -2766824341687493171LL;
int zero = 0;
unsigned short var_13 = (unsigned short)38113;
long long int var_14 = 2104565584171385559LL;
short var_15 = (short)24708;
unsigned short var_16 = (unsigned short)2792;
unsigned short var_17 = (unsigned short)64591;
short var_18 = (short)-12931;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
