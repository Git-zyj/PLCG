#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-57;
unsigned char var_7 = (unsigned char)118;
short var_8 = (short)-28265;
int zero = 0;
unsigned short var_10 = (unsigned short)50368;
long long int var_11 = -2087415821962070056LL;
long long int var_12 = -5468353304421334280LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
