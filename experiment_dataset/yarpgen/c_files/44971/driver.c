#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1358206159319518905ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)15293;
short var_13 = (short)13522;
int zero = 0;
unsigned long long int var_14 = 7855480942461531565ULL;
long long int var_15 = 4010503712473334624LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
