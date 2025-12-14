#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28952;
signed char var_7 = (signed char)117;
unsigned short var_12 = (unsigned short)25037;
long long int var_18 = 6377555501877298854LL;
int zero = 0;
int var_20 = -1519752636;
unsigned long long int var_21 = 9731182741834667461ULL;
unsigned int var_22 = 3142794906U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
