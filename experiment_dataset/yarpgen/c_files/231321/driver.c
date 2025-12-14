#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16145;
unsigned long long int var_6 = 4691506449472592170ULL;
unsigned char var_9 = (unsigned char)80;
unsigned short var_10 = (unsigned short)10695;
unsigned int var_11 = 2747264476U;
int zero = 0;
long long int var_13 = -861743967286242335LL;
unsigned short var_14 = (unsigned short)18601;
long long int var_15 = -4435221996942148372LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
