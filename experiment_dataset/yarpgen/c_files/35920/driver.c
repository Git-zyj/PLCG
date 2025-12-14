#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1465005697;
unsigned long long int var_2 = 7952949553071621823ULL;
_Bool var_4 = (_Bool)1;
int var_6 = 1598864497;
int var_8 = 1643827143;
short var_10 = (short)-14931;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
int var_12 = 1166178504;
long long int var_13 = -1616953418488758372LL;
signed char var_14 = (signed char)120;
long long int var_15 = 3782969903899773384LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
