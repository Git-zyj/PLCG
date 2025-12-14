#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6267506488581309187ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-24850;
signed char var_7 = (signed char)-4;
unsigned int var_15 = 4220877329U;
short var_16 = (short)22391;
int zero = 0;
signed char var_19 = (signed char)109;
signed char var_20 = (signed char)-54;
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
