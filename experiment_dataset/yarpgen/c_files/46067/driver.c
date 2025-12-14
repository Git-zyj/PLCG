#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned char var_7 = (unsigned char)147;
short var_13 = (short)18757;
long long int var_16 = -5234890886516811054LL;
int zero = 0;
unsigned short var_18 = (unsigned short)8616;
unsigned char var_19 = (unsigned char)172;
unsigned short var_20 = (unsigned short)5763;
signed char var_21 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
