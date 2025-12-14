#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
short var_6 = (short)-13190;
unsigned char var_9 = (unsigned char)183;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)3377;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)51853;
int zero = 0;
short var_18 = (short)-31905;
int var_19 = -2074711536;
short var_20 = (short)-23843;
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
