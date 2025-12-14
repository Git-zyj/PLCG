#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2010923136U;
unsigned long long int var_2 = 11648590094109961486ULL;
unsigned short var_9 = (unsigned short)9727;
long long int var_11 = -2469009410372619113LL;
unsigned short var_16 = (unsigned short)65027;
int zero = 0;
short var_18 = (short)371;
unsigned long long int var_19 = 11420504831603439969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
