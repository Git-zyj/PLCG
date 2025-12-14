#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
int var_6 = 2143575693;
unsigned int var_13 = 3379647946U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3781706551419941974LL;
int zero = 0;
int var_19 = -596956613;
unsigned long long int var_20 = 17674954900978650820ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-25806;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
