#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -729513816545827106LL;
_Bool var_5 = (_Bool)1;
unsigned short var_11 = (unsigned short)45145;
short var_13 = (short)-29106;
short var_14 = (short)8011;
int zero = 0;
long long int var_15 = -6376787256048279338LL;
short var_16 = (short)-19664;
short var_17 = (short)29985;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
