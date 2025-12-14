#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned int var_3 = 1227248745U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15455927273425327798ULL;
unsigned long long int var_7 = 14809665574648493335ULL;
unsigned short var_8 = (unsigned short)22469;
signed char var_9 = (signed char)35;
int zero = 0;
short var_10 = (short)-14899;
short var_11 = (short)-14814;
unsigned long long int var_12 = 13823627710872391185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
