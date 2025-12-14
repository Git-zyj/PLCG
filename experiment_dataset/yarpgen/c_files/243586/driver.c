#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
short var_9 = (short)-15127;
signed char var_10 = (signed char)-30;
unsigned int var_11 = 505582294U;
short var_13 = (short)1897;
long long int var_14 = 6020764412531362462LL;
int zero = 0;
unsigned short var_15 = (unsigned short)5779;
long long int var_16 = 8704600243917521643LL;
signed char var_17 = (signed char)-97;
unsigned char var_18 = (unsigned char)83;
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
