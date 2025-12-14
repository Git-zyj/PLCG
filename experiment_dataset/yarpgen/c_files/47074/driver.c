#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
unsigned char var_2 = (unsigned char)232;
short var_5 = (short)-18019;
signed char var_10 = (signed char)82;
long long int var_11 = -7044417820099680694LL;
long long int var_13 = -3571568782369743707LL;
short var_14 = (short)-13728;
int zero = 0;
short var_15 = (short)12326;
signed char var_16 = (signed char)-123;
void init() {
}

void checksum() {
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
