#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)143;
long long int var_3 = 749044557923694022LL;
short var_5 = (short)-28085;
int var_10 = 1343436055;
int zero = 0;
unsigned char var_12 = (unsigned char)180;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)25607;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
