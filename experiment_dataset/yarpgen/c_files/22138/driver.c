#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4005858193U;
long long int var_2 = 895414279818630781LL;
long long int var_4 = -6626271387816711387LL;
long long int var_5 = -7580591651769787825LL;
int var_7 = -1639506556;
long long int var_8 = -2853401456083587726LL;
unsigned int var_9 = 3499544673U;
int zero = 0;
long long int var_10 = -4385762897081546117LL;
short var_11 = (short)10238;
int var_12 = 1692362726;
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
