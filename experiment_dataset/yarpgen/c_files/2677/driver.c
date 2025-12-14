#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1750936951U;
short var_4 = (short)31432;
short var_8 = (short)-11279;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)85;
int zero = 0;
unsigned short var_15 = (unsigned short)21625;
unsigned int var_16 = 1105043271U;
short var_17 = (short)26164;
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
