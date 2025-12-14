#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18931;
unsigned short var_3 = (unsigned short)34324;
long long int var_4 = -2571399458824971736LL;
signed char var_6 = (signed char)81;
long long int var_8 = 4819911689899895466LL;
int zero = 0;
short var_18 = (short)-6539;
long long int var_19 = 3324024780929972748LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
