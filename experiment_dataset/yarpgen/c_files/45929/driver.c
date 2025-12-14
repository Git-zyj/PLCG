#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1645544010;
unsigned char var_2 = (unsigned char)248;
unsigned long long int var_4 = 142274107903345769ULL;
signed char var_6 = (signed char)71;
unsigned long long int var_7 = 3852150665225609401ULL;
signed char var_8 = (signed char)-88;
signed char var_9 = (signed char)118;
int zero = 0;
short var_10 = (short)-19442;
unsigned short var_11 = (unsigned short)699;
_Bool var_12 = (_Bool)0;
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
