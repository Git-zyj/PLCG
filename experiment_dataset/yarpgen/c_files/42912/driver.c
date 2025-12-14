#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -2048247682;
short var_3 = (short)-1167;
signed char var_7 = (signed char)-58;
long long int var_8 = -793535290462329877LL;
unsigned int var_9 = 365070970U;
int var_10 = -1189208511;
unsigned long long int var_14 = 12795149912626776132ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
short var_16 = (short)1706;
int var_17 = -1439944744;
signed char var_18 = (signed char)-127;
unsigned char var_19 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
