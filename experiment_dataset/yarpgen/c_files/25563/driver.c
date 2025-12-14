#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
short var_5 = (short)11340;
signed char var_6 = (signed char)-115;
unsigned long long int var_8 = 15116697315198165532ULL;
short var_9 = (short)-30547;
unsigned char var_12 = (unsigned char)103;
unsigned short var_13 = (unsigned short)6978;
signed char var_15 = (signed char)-39;
long long int var_16 = 5385184150924245534LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 424966906;
short var_19 = (short)-17345;
unsigned short var_20 = (unsigned short)35296;
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
