#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
long long int var_1 = 1128421090585078130LL;
unsigned int var_2 = 1680049135U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)236;
unsigned short var_6 = (unsigned short)39800;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
short var_12 = (short)22385;
unsigned int var_13 = 4048535966U;
long long int var_14 = -6521308840125318895LL;
void init() {
}

void checksum() {
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
