#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4811732823636995022ULL;
signed char var_1 = (signed char)89;
unsigned long long int var_3 = 1587042392795566784ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = 8063719681793384648LL;
unsigned long long int var_12 = 7441516516357361265ULL;
int var_13 = -666059717;
short var_14 = (short)-25440;
signed char var_15 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
