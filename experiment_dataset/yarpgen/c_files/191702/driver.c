#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21404;
long long int var_4 = 6720703216061064127LL;
signed char var_7 = (signed char)121;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
signed char var_12 = (signed char)20;
unsigned short var_13 = (unsigned short)22014;
signed char var_14 = (signed char)-112;
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
