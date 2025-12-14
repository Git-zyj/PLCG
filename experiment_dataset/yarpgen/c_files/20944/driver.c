#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
unsigned short var_3 = (unsigned short)47098;
int var_5 = 933373646;
unsigned char var_7 = (unsigned char)183;
short var_9 = (short)16696;
short var_10 = (short)-25032;
int var_17 = -1460663853;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-2;
void init() {
}

void checksum() {
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
