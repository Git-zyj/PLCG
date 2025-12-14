#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60193;
short var_3 = (short)-25686;
long long int var_7 = -5619706880799852995LL;
unsigned short var_15 = (unsigned short)61118;
int zero = 0;
unsigned long long int var_17 = 2355910446050268195ULL;
unsigned short var_18 = (unsigned short)36775;
unsigned int var_19 = 1565468120U;
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
