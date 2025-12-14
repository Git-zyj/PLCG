#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)61284;
unsigned long long int var_10 = 10539028157399171426ULL;
unsigned short var_13 = (unsigned short)31836;
long long int var_16 = 3586272892387664059LL;
int zero = 0;
long long int var_17 = -7549178084309810135LL;
unsigned short var_18 = (unsigned short)55038;
void init() {
}

void checksum() {
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
