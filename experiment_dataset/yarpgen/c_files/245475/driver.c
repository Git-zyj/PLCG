#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2595357191U;
unsigned char var_1 = (unsigned char)184;
unsigned long long int var_3 = 9153155495638822204ULL;
long long int var_4 = 5200840540486381966LL;
unsigned short var_9 = (unsigned short)33233;
unsigned int var_10 = 441016744U;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)45181;
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
