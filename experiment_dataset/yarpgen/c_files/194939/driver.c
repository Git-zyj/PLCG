#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1870782473163961519LL;
unsigned int var_1 = 3910711697U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)179;
short var_7 = (short)-13732;
_Bool var_9 = (_Bool)1;
int var_11 = -123121695;
int zero = 0;
unsigned int var_12 = 1275477476U;
unsigned char var_13 = (unsigned char)38;
int var_14 = 417033924;
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
