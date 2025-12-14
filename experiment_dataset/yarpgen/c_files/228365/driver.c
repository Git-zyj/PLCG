#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15616643208232288291ULL;
unsigned char var_9 = (unsigned char)120;
short var_12 = (short)-10996;
long long int var_15 = -9194160198419181370LL;
short var_18 = (short)-30633;
long long int var_19 = -4411749973746963640LL;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
unsigned char var_21 = (unsigned char)127;
int var_22 = 1271234855;
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
