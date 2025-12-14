#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1181476919;
unsigned char var_4 = (unsigned char)136;
unsigned char var_6 = (unsigned char)44;
long long int var_8 = 549862982882091318LL;
int zero = 0;
long long int var_13 = -9126447219959956979LL;
int var_14 = -1547407272;
unsigned char var_15 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
