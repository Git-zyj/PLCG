#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 486229615U;
unsigned int var_3 = 2226821904U;
long long int var_6 = 7066615245095625970LL;
unsigned char var_7 = (unsigned char)34;
unsigned short var_9 = (unsigned short)38011;
short var_10 = (short)32728;
int var_11 = -348490630;
short var_12 = (short)-23622;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
