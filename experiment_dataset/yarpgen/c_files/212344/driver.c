#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1548658759;
short var_4 = (short)21829;
signed char var_7 = (signed char)-54;
long long int var_9 = -1383458313719798055LL;
int zero = 0;
signed char var_17 = (signed char)125;
int var_18 = 2036157419;
unsigned long long int var_19 = 18417133696729327141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
