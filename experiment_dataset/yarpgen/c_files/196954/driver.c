#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -410651652;
unsigned short var_6 = (unsigned short)19044;
int var_12 = 1416987559;
unsigned long long int var_13 = 11832198481938027501ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 84121976;
unsigned long long int var_19 = 15470771242887560930ULL;
long long int var_20 = 903400346797988953LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
