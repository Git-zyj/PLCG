#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
short var_3 = (short)10038;
unsigned short var_7 = (unsigned short)46609;
unsigned short var_8 = (unsigned short)13656;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)16287;
signed char var_13 = (signed char)-85;
unsigned char var_14 = (unsigned char)73;
unsigned short var_15 = (unsigned short)22105;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
