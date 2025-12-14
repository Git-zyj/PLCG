#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5377621104263463707LL;
unsigned int var_6 = 4260146359U;
unsigned int var_7 = 2380806547U;
int var_9 = -1738669560;
unsigned char var_10 = (unsigned char)103;
signed char var_11 = (signed char)-40;
unsigned char var_14 = (unsigned char)101;
int zero = 0;
unsigned long long int var_20 = 6077778667214770704ULL;
long long int var_21 = -6659261057899920912LL;
signed char var_22 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
