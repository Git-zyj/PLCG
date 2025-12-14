#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 9211944295132751716LL;
unsigned int var_7 = 3814002488U;
unsigned char var_8 = (unsigned char)7;
long long int var_9 = 1073783828380283247LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-1180;
int var_13 = 1848872463;
long long int var_14 = 1412508709110837150LL;
long long int var_15 = -3073974710771549664LL;
short var_16 = (short)-9443;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
