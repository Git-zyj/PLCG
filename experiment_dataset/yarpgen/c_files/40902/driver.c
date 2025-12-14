#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)2;
long long int var_5 = -2563834103838929121LL;
long long int var_8 = -7390322280070108170LL;
signed char var_10 = (signed char)78;
unsigned short var_11 = (unsigned short)64104;
int zero = 0;
unsigned int var_18 = 1503909062U;
short var_19 = (short)-18372;
signed char var_20 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
