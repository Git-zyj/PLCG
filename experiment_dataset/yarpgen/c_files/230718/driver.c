#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3523448859U;
unsigned int var_6 = 164520514U;
unsigned short var_8 = (unsigned short)32781;
unsigned int var_9 = 3178544512U;
int var_12 = 305092247;
signed char var_15 = (signed char)-51;
long long int var_16 = -5462522667230531230LL;
short var_18 = (short)3124;
int zero = 0;
short var_19 = (short)-10883;
short var_20 = (short)-120;
void init() {
}

void checksum() {
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
