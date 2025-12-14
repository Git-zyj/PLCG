#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25591;
short var_3 = (short)-12655;
short var_4 = (short)-24612;
short var_6 = (short)-28144;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
unsigned char var_11 = (unsigned char)223;
short var_12 = (short)5350;
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
