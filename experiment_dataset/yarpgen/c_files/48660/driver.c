#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
signed char var_3 = (signed char)-19;
unsigned char var_4 = (unsigned char)102;
signed char var_5 = (signed char)122;
unsigned int var_7 = 1445290062U;
unsigned long long int var_9 = 12966269098395329938ULL;
unsigned int var_12 = 1287234098U;
unsigned short var_16 = (unsigned short)39271;
int zero = 0;
unsigned short var_17 = (unsigned short)39878;
unsigned short var_18 = (unsigned short)56018;
void init() {
}

void checksum() {
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
