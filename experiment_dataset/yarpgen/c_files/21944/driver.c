#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 535501222455092356ULL;
unsigned long long int var_3 = 16351953710456134576ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2454782739U;
long long int var_8 = 2012264806690513089LL;
int zero = 0;
unsigned int var_10 = 2180660398U;
unsigned short var_11 = (unsigned short)60410;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
