#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -6466352741998889772LL;
unsigned long long int var_7 = 12986984271793129680ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 14824599099566296303ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)23218;
unsigned char var_17 = (unsigned char)240;
signed char var_18 = (signed char)19;
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
