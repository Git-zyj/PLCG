#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11140525146550655621ULL;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)50693;
unsigned short var_8 = (unsigned short)18058;
int zero = 0;
unsigned short var_12 = (unsigned short)270;
unsigned int var_13 = 4254337636U;
unsigned long long int var_14 = 2771719549818431725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
