#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1048764791845383796LL;
unsigned char var_5 = (unsigned char)209;
unsigned int var_14 = 1095252132U;
int var_15 = 683552246;
int zero = 0;
unsigned int var_18 = 2335256395U;
unsigned int var_19 = 2552382297U;
int var_20 = -1458417143;
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
