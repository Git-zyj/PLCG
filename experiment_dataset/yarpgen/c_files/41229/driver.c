#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)3;
int var_7 = 1321049007;
short var_9 = (short)31806;
short var_11 = (short)31278;
signed char var_12 = (signed char)-124;
int zero = 0;
unsigned short var_14 = (unsigned short)39670;
short var_15 = (short)32295;
int var_16 = 413969258;
int var_17 = -1198509524;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
