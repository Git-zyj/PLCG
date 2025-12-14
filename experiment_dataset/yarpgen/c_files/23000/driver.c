#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-22758;
unsigned short var_9 = (unsigned short)62218;
unsigned long long int var_13 = 10824457953712392907ULL;
unsigned char var_14 = (unsigned char)61;
unsigned int var_15 = 2501428021U;
long long int var_17 = 5941688077026330836LL;
int zero = 0;
int var_18 = 1057919828;
unsigned long long int var_19 = 12866905427640021755ULL;
unsigned short var_20 = (unsigned short)16454;
signed char var_21 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
