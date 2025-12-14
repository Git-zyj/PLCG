#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2947052653284874184LL;
unsigned short var_4 = (unsigned short)43857;
unsigned long long int var_8 = 12184895340636603453ULL;
long long int var_11 = 7943959727695944565LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -7909909419240460751LL;
long long int var_14 = -673713583077041712LL;
long long int var_15 = 1422600553647218534LL;
void init() {
}

void checksum() {
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
