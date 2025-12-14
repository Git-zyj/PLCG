#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56876;
short var_1 = (short)-31851;
unsigned short var_2 = (unsigned short)18169;
unsigned int var_5 = 538225955U;
unsigned short var_6 = (unsigned short)42181;
long long int var_8 = -1746597506935606203LL;
int var_9 = -1502058666;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1271620367U;
unsigned int var_18 = 1769673352U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
