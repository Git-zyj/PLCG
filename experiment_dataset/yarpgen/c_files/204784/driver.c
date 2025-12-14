#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -246192988601467428LL;
short var_6 = (short)14465;
long long int var_7 = 523374532056295305LL;
unsigned long long int var_11 = 2184650271542220804ULL;
int var_13 = -1478316975;
int zero = 0;
long long int var_17 = -8764632997186031762LL;
unsigned long long int var_18 = 16552756866334439401ULL;
signed char var_19 = (signed char)43;
unsigned long long int var_20 = 3767633102118709047ULL;
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
