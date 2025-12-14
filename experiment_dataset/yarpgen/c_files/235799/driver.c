#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned char var_2 = (unsigned char)45;
unsigned short var_3 = (unsigned short)58088;
unsigned long long int var_4 = 13453335281833809555ULL;
unsigned long long int var_11 = 15008154097143018370ULL;
int zero = 0;
unsigned int var_15 = 2800402132U;
long long int var_16 = -3974398481377062553LL;
int var_17 = 2088289914;
void init() {
}

void checksum() {
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
