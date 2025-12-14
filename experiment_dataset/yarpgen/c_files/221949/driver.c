#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29903;
int var_1 = -750163414;
long long int var_4 = 7411898683093875810LL;
int var_5 = -126519007;
int var_6 = 2141087034;
int zero = 0;
short var_16 = (short)5548;
unsigned long long int var_17 = 9202580943219204997ULL;
unsigned long long int var_18 = 4638278282900517829ULL;
unsigned long long int var_19 = 11757686631023258230ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
