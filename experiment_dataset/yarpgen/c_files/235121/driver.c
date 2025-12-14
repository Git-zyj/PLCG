#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
unsigned long long int var_1 = 1591122964787413200ULL;
_Bool var_3 = (_Bool)0;
long long int var_6 = -4089038621201839689LL;
unsigned int var_8 = 2291941799U;
int zero = 0;
int var_13 = -762510494;
short var_14 = (short)-6842;
unsigned int var_15 = 2318496649U;
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
