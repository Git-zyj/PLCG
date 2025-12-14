#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_8 = (short)32494;
int var_9 = 82943079;
int zero = 0;
unsigned int var_10 = 1913507770U;
long long int var_11 = 4006038916974178971LL;
unsigned short var_12 = (unsigned short)53717;
unsigned long long int var_13 = 5887918506012997007ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
