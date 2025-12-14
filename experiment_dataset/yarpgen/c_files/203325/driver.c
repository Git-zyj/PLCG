#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16018524523152062128ULL;
short var_3 = (short)19224;
unsigned short var_7 = (unsigned short)9693;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)14;
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
