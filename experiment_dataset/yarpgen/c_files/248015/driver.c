#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -997259440024596091LL;
unsigned short var_1 = (unsigned short)13559;
int var_4 = 1176990246;
long long int var_6 = 9102013863456467499LL;
unsigned long long int var_7 = 10664828544597545958ULL;
signed char var_8 = (signed char)-122;
int var_9 = 455067425;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-6199;
int zero = 0;
unsigned char var_17 = (unsigned char)242;
short var_18 = (short)-924;
int var_19 = 689422241;
signed char var_20 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
