#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5672784279427386033LL;
long long int var_7 = 1975557707020149489LL;
unsigned long long int var_10 = 11604899555199512996ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)1561;
int var_16 = -1191946374;
unsigned short var_17 = (unsigned short)64148;
unsigned short var_18 = (unsigned short)27420;
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
