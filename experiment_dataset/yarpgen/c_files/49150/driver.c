#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3492140914184944132LL;
short var_10 = (short)22508;
long long int var_15 = -2184221244415689184LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)54109;
long long int var_20 = 4653079903345792706LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
