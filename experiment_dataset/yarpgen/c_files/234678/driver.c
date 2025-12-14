#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned long long int var_2 = 11268574103068464847ULL;
long long int var_10 = -3329190550177976795LL;
unsigned char var_13 = (unsigned char)226;
unsigned int var_14 = 1733284858U;
unsigned long long int var_15 = 13805266136841806428ULL;
unsigned short var_16 = (unsigned short)50659;
int zero = 0;
unsigned short var_18 = (unsigned short)42550;
short var_19 = (short)-17003;
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
