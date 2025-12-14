#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
unsigned long long int var_5 = 13080814475093555669ULL;
long long int var_7 = 5886019562950940634LL;
int var_10 = -1287833628;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
long long int var_12 = -8792259849787257308LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
