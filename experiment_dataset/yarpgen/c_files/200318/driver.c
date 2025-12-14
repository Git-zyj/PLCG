#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
unsigned long long int var_4 = 6380816284772353740ULL;
unsigned long long int var_6 = 7663149775054188276ULL;
unsigned long long int var_13 = 8086425281296250349ULL;
int zero = 0;
signed char var_14 = (signed char)-114;
unsigned long long int var_15 = 9099876680096117325ULL;
unsigned long long int var_16 = 206684420240454635ULL;
signed char var_17 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
