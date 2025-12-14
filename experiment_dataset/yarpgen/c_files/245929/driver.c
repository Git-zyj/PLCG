#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3764929671243031486ULL;
unsigned long long int var_4 = 3319202392717663519ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-12366;
unsigned long long int var_12 = 3442122887909210032ULL;
short var_15 = (short)-9238;
int zero = 0;
signed char var_16 = (signed char)-69;
short var_17 = (short)1048;
void init() {
}

void checksum() {
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
