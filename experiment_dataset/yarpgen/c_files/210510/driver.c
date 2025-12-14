#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19973;
short var_1 = (short)9655;
long long int var_2 = 2440538555579972792LL;
long long int var_3 = -1493522434723582586LL;
short var_6 = (short)9448;
unsigned int var_10 = 3237600680U;
int zero = 0;
unsigned long long int var_11 = 2482906339949282876ULL;
unsigned char var_12 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
