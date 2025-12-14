#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1750326144395659391LL;
int var_13 = -1279205943;
int zero = 0;
unsigned int var_15 = 3986576935U;
short var_16 = (short)-14973;
short var_17 = (short)-15151;
long long int var_18 = -8216805257043908464LL;
int var_19 = 614788017;
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
