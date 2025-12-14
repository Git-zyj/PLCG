#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6305125828107046647LL;
long long int var_7 = 731489977306440083LL;
unsigned char var_10 = (unsigned char)25;
long long int var_12 = 7878359256003016049LL;
int zero = 0;
unsigned long long int var_15 = 15374922371295914955ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1493838879U;
void init() {
}

void checksum() {
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
