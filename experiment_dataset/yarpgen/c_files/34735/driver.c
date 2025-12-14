#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-43;
long long int var_5 = 981599359462758083LL;
signed char var_6 = (signed char)117;
short var_7 = (short)14007;
int zero = 0;
unsigned int var_10 = 3048499447U;
unsigned short var_11 = (unsigned short)40281;
unsigned short var_12 = (unsigned short)29432;
unsigned long long int var_13 = 17580516543251161661ULL;
unsigned short var_14 = (unsigned short)54475;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
