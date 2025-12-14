#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3810946525U;
unsigned short var_2 = (unsigned short)41578;
unsigned short var_3 = (unsigned short)38207;
unsigned char var_4 = (unsigned char)222;
unsigned long long int var_5 = 4133379806909670228ULL;
unsigned char var_9 = (unsigned char)139;
long long int var_11 = 1578139465599607585LL;
signed char var_12 = (signed char)-44;
signed char var_13 = (signed char)113;
int zero = 0;
long long int var_14 = 2274271379404870140LL;
signed char var_15 = (signed char)105;
unsigned char var_16 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
