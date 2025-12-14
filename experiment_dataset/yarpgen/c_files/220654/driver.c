#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22877;
long long int var_7 = 758461778233820277LL;
unsigned char var_8 = (unsigned char)35;
unsigned char var_9 = (unsigned char)223;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
unsigned short var_15 = (unsigned short)498;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1533;
unsigned int var_18 = 2802503667U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
