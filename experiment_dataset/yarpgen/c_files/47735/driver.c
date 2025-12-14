#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4992853370733051797LL;
unsigned char var_7 = (unsigned char)142;
signed char var_8 = (signed char)-92;
unsigned char var_9 = (unsigned char)121;
unsigned long long int var_10 = 12815593928786396846ULL;
int var_11 = 687938760;
short var_16 = (short)-23498;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34559;
unsigned short var_19 = (unsigned short)59953;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
