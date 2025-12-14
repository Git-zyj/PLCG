#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 679477973951558840LL;
unsigned long long int var_1 = 11580509850461570199ULL;
unsigned long long int var_2 = 8396728633044763904ULL;
signed char var_3 = (signed char)-125;
_Bool var_4 = (_Bool)1;
short var_5 = (short)23361;
long long int var_6 = 1511246938544219773LL;
int zero = 0;
short var_10 = (short)13486;
long long int var_11 = -6362468523175517045LL;
long long int var_12 = 3343296445337490509LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
