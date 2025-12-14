#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12688416087386594143ULL;
unsigned short var_6 = (unsigned short)22650;
int var_8 = 32645043;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 787869520857695781ULL;
int zero = 0;
int var_16 = 1665120481;
unsigned long long int var_17 = 3087174952264913470ULL;
short var_18 = (short)26754;
short var_19 = (short)18138;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
