#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3339949464395345791LL;
long long int var_11 = 7262872274087800259LL;
int var_13 = 1278091955;
signed char var_17 = (signed char)-15;
int zero = 0;
unsigned long long int var_18 = 643201867120304443ULL;
short var_19 = (short)-14356;
void init() {
}

void checksum() {
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
