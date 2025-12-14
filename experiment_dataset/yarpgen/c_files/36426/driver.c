#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
long long int var_3 = 7449683888408018177LL;
unsigned short var_7 = (unsigned short)25450;
unsigned char var_9 = (unsigned char)136;
unsigned char var_12 = (unsigned char)189;
signed char var_13 = (signed char)124;
int zero = 0;
short var_14 = (short)20618;
unsigned char var_15 = (unsigned char)1;
signed char var_16 = (signed char)80;
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
