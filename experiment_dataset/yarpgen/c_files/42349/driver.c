#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1906107669;
long long int var_6 = -4340571785853011677LL;
unsigned long long int var_9 = 1302571614353945937ULL;
_Bool var_10 = (_Bool)1;
int var_16 = -820570584;
long long int var_17 = 7338289439739960266LL;
int zero = 0;
long long int var_19 = -7839621687000404832LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)26350;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
