#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-52;
int var_4 = -408800235;
unsigned char var_6 = (unsigned char)247;
unsigned int var_7 = 69099707U;
unsigned short var_8 = (unsigned short)46740;
signed char var_10 = (signed char)-44;
int zero = 0;
long long int var_14 = -282512750480595540LL;
unsigned short var_15 = (unsigned short)34912;
long long int var_16 = -1844151305325816860LL;
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
