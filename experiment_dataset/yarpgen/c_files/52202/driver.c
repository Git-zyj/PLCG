#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
unsigned long long int var_2 = 1235773862789046246ULL;
signed char var_7 = (signed char)16;
int var_12 = 2069804009;
int zero = 0;
int var_18 = -1174110911;
short var_19 = (short)3677;
short var_20 = (short)-1534;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
