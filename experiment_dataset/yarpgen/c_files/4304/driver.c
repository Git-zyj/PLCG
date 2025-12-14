#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
long long int var_3 = 8221416115773644562LL;
signed char var_4 = (signed char)13;
unsigned char var_6 = (unsigned char)224;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4724876798674010543ULL;
unsigned long long int var_14 = 2216251256503446675ULL;
int zero = 0;
unsigned int var_18 = 1550995991U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
