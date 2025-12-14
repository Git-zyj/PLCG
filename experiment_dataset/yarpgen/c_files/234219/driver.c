#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)20323;
long long int var_2 = -1230866389045132343LL;
unsigned long long int var_3 = 1221667769654614342ULL;
long long int var_4 = 6445894198844330387LL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)31386;
int zero = 0;
int var_12 = 442654941;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-28340;
long long int var_15 = 8110008930924741428LL;
void init() {
}

void checksum() {
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
