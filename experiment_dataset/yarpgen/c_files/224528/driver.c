#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)52;
int var_6 = -1924710907;
short var_7 = (short)31733;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13672384943244959421ULL;
long long int var_16 = -4387952242196450934LL;
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
