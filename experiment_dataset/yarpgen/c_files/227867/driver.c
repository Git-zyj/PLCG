#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50719;
unsigned long long int var_7 = 14073452829579079306ULL;
unsigned long long int var_8 = 506859153658720769ULL;
long long int var_9 = -1561459827146624967LL;
long long int var_10 = -649100008635038920LL;
unsigned int var_12 = 3094946645U;
long long int var_13 = 2669143606206572721LL;
int zero = 0;
short var_14 = (short)-19373;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)47926;
void init() {
}

void checksum() {
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
