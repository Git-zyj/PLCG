#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47239;
short var_2 = (short)-26006;
unsigned char var_3 = (unsigned char)88;
int var_5 = -1595574736;
unsigned char var_6 = (unsigned char)239;
unsigned short var_8 = (unsigned short)46942;
unsigned long long int var_9 = 3487525242115653828ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)243;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)46398;
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
