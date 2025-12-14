#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1721063056;
short var_4 = (short)-30959;
unsigned long long int var_7 = 6325491183554298226ULL;
long long int var_9 = 5370549279158004464LL;
int zero = 0;
unsigned char var_17 = (unsigned char)94;
short var_18 = (short)30566;
int var_19 = -210473227;
unsigned short var_20 = (unsigned short)54229;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
