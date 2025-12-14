#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65483;
unsigned long long int var_8 = 10107859472139378529ULL;
unsigned long long int var_12 = 10710181814155165875ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)20152;
unsigned long long int var_17 = 3291527396600428036ULL;
unsigned long long int var_18 = 17078296871082615804ULL;
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
