#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32048;
unsigned char var_4 = (unsigned char)82;
int var_8 = -1565168958;
long long int var_17 = -6625422872864618432LL;
int zero = 0;
long long int var_18 = 3661856207937965045LL;
unsigned long long int var_19 = 16599636787885278073ULL;
_Bool var_20 = (_Bool)1;
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
