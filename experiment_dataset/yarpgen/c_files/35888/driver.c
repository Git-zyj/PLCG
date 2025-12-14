#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned int var_4 = 524738504U;
long long int var_5 = 3275380312052183466LL;
unsigned long long int var_8 = 14825217386258715446ULL;
int zero = 0;
unsigned long long int var_14 = 29185627682386097ULL;
int var_15 = -1722018550;
short var_16 = (short)14937;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
