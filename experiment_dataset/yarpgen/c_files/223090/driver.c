#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 564458289186702575LL;
short var_3 = (short)27186;
long long int var_4 = -2107043624357998298LL;
long long int var_9 = 7450833038804310437LL;
unsigned int var_11 = 3165814415U;
unsigned short var_13 = (unsigned short)1146;
long long int var_14 = 8186364126093831409LL;
long long int var_15 = -3997100730818200999LL;
int var_16 = 1249095354;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
long long int var_19 = -2329196948822418008LL;
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
