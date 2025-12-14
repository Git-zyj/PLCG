#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7040540282015780312LL;
signed char var_5 = (signed char)34;
int var_7 = 1853827804;
int zero = 0;
unsigned short var_17 = (unsigned short)31190;
signed char var_18 = (signed char)-71;
short var_19 = (short)-26809;
unsigned int var_20 = 3590384839U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
