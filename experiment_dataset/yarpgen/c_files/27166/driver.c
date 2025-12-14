#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned long long int var_1 = 14624593763041593823ULL;
long long int var_5 = 4685012884956942129LL;
signed char var_6 = (signed char)-58;
short var_16 = (short)-2713;
int zero = 0;
short var_17 = (short)-5506;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1884988704U;
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
