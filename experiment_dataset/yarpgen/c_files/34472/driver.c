#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)124;
unsigned char var_4 = (unsigned char)29;
long long int var_5 = -1997841085520801951LL;
unsigned short var_7 = (unsigned short)55912;
unsigned long long int var_11 = 10322061568623836104ULL;
unsigned char var_12 = (unsigned char)36;
int zero = 0;
unsigned char var_15 = (unsigned char)47;
int var_16 = -1435313243;
unsigned int var_17 = 943435471U;
_Bool var_18 = (_Bool)0;
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
