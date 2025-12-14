#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_7 = 48176070600910919LL;
short var_8 = (short)13126;
int var_11 = 1186570572;
unsigned int var_14 = 1373001705U;
int zero = 0;
unsigned long long int var_19 = 3616240539980520001ULL;
int var_20 = -1993172469;
unsigned char var_21 = (unsigned char)209;
unsigned short var_22 = (unsigned short)14457;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
