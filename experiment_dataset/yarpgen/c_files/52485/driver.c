#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15146585085591746734ULL;
unsigned long long int var_4 = 18000520983747335209ULL;
int var_5 = 1932344856;
unsigned int var_7 = 1466517349U;
unsigned char var_9 = (unsigned char)93;
int zero = 0;
int var_11 = -466832732;
unsigned int var_12 = 1022607160U;
unsigned long long int var_13 = 4013306985166224874ULL;
unsigned long long int var_14 = 14690929818851204768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
