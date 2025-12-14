#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
unsigned char var_7 = (unsigned char)122;
long long int var_8 = 3553506917886007115LL;
short var_9 = (short)-29434;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-10402;
short var_12 = (short)22079;
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
