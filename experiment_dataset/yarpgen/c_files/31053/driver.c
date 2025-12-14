#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27955;
int var_6 = -1361459032;
signed char var_7 = (signed char)124;
int var_8 = -2077251383;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_15 = 159966135642637236LL;
int var_16 = -1491557248;
signed char var_17 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
