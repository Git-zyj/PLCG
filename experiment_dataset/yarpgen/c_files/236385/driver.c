#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 11183452125971810858ULL;
unsigned short var_8 = (unsigned short)10332;
long long int var_11 = 6338748300123576800LL;
long long int var_13 = 8074993456661300910LL;
int zero = 0;
long long int var_14 = 250305191323274356LL;
unsigned short var_15 = (unsigned short)5889;
int var_16 = -935484259;
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
