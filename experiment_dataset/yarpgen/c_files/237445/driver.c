#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
unsigned char var_6 = (unsigned char)235;
long long int var_9 = -1866299204956769239LL;
short var_10 = (short)-1770;
int zero = 0;
int var_14 = -1586575713;
unsigned char var_15 = (unsigned char)61;
short var_16 = (short)9365;
unsigned long long int var_17 = 8536148747491026561ULL;
unsigned short var_18 = (unsigned short)18963;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
