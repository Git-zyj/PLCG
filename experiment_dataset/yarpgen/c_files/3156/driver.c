#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)34;
unsigned long long int var_15 = 13742262604783149361ULL;
unsigned short var_17 = (unsigned short)37057;
long long int var_18 = -4902736650812735043LL;
int zero = 0;
short var_20 = (short)-25657;
unsigned short var_21 = (unsigned short)1041;
short var_22 = (short)-3533;
short var_23 = (short)20508;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
