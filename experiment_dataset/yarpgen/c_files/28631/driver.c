#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12437846370522822642ULL;
unsigned int var_5 = 2396086900U;
unsigned int var_7 = 1088047395U;
unsigned int var_9 = 2312683711U;
unsigned char var_11 = (unsigned char)240;
unsigned int var_12 = 593851815U;
long long int var_14 = 7461921805254197917LL;
unsigned int var_16 = 2878107035U;
int zero = 0;
long long int var_17 = -7809204972289806912LL;
unsigned int var_18 = 775209516U;
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
