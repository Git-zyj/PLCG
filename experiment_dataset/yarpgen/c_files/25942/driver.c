#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1189938889;
unsigned short var_1 = (unsigned short)4261;
int var_16 = -1306958700;
int zero = 0;
unsigned short var_17 = (unsigned short)5885;
unsigned int var_18 = 1701563118U;
void init() {
}

void checksum() {
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
