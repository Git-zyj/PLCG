#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)10;
_Bool var_4 = (_Bool)0;
short var_6 = (short)14308;
unsigned int var_7 = 1452097933U;
unsigned long long int var_9 = 14292514692560673044ULL;
unsigned short var_15 = (unsigned short)880;
int zero = 0;
unsigned int var_17 = 3687948897U;
unsigned short var_18 = (unsigned short)25457;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
