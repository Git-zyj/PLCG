#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18707;
_Bool var_3 = (_Bool)0;
short var_6 = (short)16873;
unsigned int var_7 = 2214810336U;
int zero = 0;
unsigned long long int var_13 = 8063445804982894ULL;
short var_14 = (short)27822;
void init() {
}

void checksum() {
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
