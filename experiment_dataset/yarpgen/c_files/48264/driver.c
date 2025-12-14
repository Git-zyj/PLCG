#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8843300523860697207ULL;
unsigned short var_7 = (unsigned short)56543;
short var_8 = (short)-239;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1572013461;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
