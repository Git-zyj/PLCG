#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8488564376296863652LL;
signed char var_2 = (signed char)115;
signed char var_5 = (signed char)-10;
signed char var_14 = (signed char)86;
int zero = 0;
unsigned long long int var_19 = 4843787507477944362ULL;
long long int var_20 = 8368288054813408037LL;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
