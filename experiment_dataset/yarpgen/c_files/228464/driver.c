#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
int var_3 = -1411126316;
unsigned char var_4 = (unsigned char)82;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-15036;
unsigned long long int var_12 = 1761527307232504715ULL;
signed char var_13 = (signed char)39;
signed char var_14 = (signed char)-54;
int zero = 0;
unsigned long long int var_15 = 10297502802377553582ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-60;
unsigned long long int var_18 = 15243865956073880141ULL;
int var_19 = 599362200;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
