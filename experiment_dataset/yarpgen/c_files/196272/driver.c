#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)28;
int var_6 = -1523832577;
unsigned char var_9 = (unsigned char)104;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)51;
int zero = 0;
long long int var_15 = 1864978019715580363LL;
long long int var_16 = -2462085615881562774LL;
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
