#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17020506517893510352ULL;
long long int var_1 = 3750060054161553391LL;
long long int var_6 = -6708697522365628278LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -1542841996;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-262;
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
