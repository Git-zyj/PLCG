#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7603682137018142519LL;
unsigned long long int var_8 = 127419483177933958ULL;
short var_18 = (short)-16482;
int zero = 0;
long long int var_19 = 1349262381408927968LL;
unsigned long long int var_20 = 9645819419990698701ULL;
void init() {
}

void checksum() {
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
