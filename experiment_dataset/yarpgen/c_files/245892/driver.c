#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-90;
short var_2 = (short)-6994;
unsigned long long int var_3 = 17799604826287254758ULL;
long long int var_7 = -425954060086488358LL;
unsigned int var_8 = 1301857U;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 3554532180451024470LL;
unsigned int var_11 = 4112660256U;
unsigned long long int var_12 = 6684419290434179166ULL;
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
