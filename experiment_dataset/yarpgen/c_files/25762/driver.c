#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3030940650U;
unsigned int var_7 = 4087699284U;
unsigned char var_9 = (unsigned char)169;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 206208505U;
int zero = 0;
signed char var_16 = (signed char)-77;
short var_17 = (short)-24341;
unsigned int var_18 = 2258742445U;
void init() {
}

void checksum() {
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
