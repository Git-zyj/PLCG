#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3267997063U;
unsigned short var_6 = (unsigned short)20615;
unsigned char var_7 = (unsigned char)130;
unsigned short var_8 = (unsigned short)55341;
signed char var_9 = (signed char)-17;
long long int var_13 = 3359651044559814442LL;
int zero = 0;
unsigned char var_15 = (unsigned char)89;
short var_16 = (short)-21146;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)30;
void init() {
}

void checksum() {
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
