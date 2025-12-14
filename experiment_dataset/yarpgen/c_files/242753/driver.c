#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1067677814;
short var_2 = (short)-19102;
int var_5 = 1792535566;
int var_6 = -1335395904;
unsigned int var_8 = 1131158973U;
long long int var_12 = 5502683736819236995LL;
int zero = 0;
short var_15 = (short)20683;
int var_16 = -1383278945;
void init() {
}

void checksum() {
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
