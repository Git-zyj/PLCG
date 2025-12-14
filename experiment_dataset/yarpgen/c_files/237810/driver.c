#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1218855892;
short var_2 = (short)-4465;
unsigned long long int var_5 = 4587588620531188178ULL;
signed char var_14 = (signed char)-81;
int zero = 0;
long long int var_18 = -3661337801645201035LL;
long long int var_19 = -5590949256161687329LL;
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
