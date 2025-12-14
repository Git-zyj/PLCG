#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
signed char var_7 = (signed char)47;
unsigned char var_9 = (unsigned char)170;
unsigned short var_10 = (unsigned short)20906;
unsigned char var_13 = (unsigned char)217;
long long int var_16 = -6685890452352946061LL;
int zero = 0;
short var_20 = (short)-1874;
unsigned char var_21 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
