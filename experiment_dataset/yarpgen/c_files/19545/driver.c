#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3456825253295909744LL;
int var_1 = -1941370237;
unsigned char var_5 = (unsigned char)205;
int var_6 = -354707680;
unsigned int var_7 = 3742469797U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)10120;
short var_10 = (short)-19015;
long long int var_11 = 3026899415514865277LL;
int zero = 0;
unsigned int var_13 = 1344812910U;
short var_14 = (short)-28468;
long long int var_15 = -7993194824996072001LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
