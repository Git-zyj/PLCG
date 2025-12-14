#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1419384566;
signed char var_3 = (signed char)45;
int var_4 = -1777044582;
int var_9 = -1416014527;
int zero = 0;
unsigned long long int var_14 = 17351757625077810213ULL;
long long int var_15 = 3681906498707978430LL;
_Bool var_16 = (_Bool)1;
int var_17 = 1602088868;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
