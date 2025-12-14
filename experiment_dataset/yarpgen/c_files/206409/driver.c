#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
long long int var_2 = 4525077319464498387LL;
signed char var_5 = (signed char)-84;
short var_6 = (short)-28444;
signed char var_7 = (signed char)25;
int var_8 = 1174933807;
signed char var_9 = (signed char)126;
int zero = 0;
short var_11 = (short)7307;
unsigned int var_12 = 1649684583U;
unsigned long long int var_13 = 3918622449307305735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
