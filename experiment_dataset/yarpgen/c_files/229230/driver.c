#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1203183827;
unsigned long long int var_2 = 10670952510384497925ULL;
unsigned int var_3 = 381711750U;
signed char var_6 = (signed char)-8;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 2476339585U;
int var_17 = 1925575278;
int var_19 = 248772638;
int zero = 0;
int var_20 = -1097359800;
unsigned long long int var_21 = 10167291825148266109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
