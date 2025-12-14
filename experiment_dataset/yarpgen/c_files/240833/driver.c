#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)13499;
int var_8 = -393440370;
unsigned short var_9 = (unsigned short)25697;
long long int var_10 = -8968518355710484883LL;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
unsigned short var_14 = (unsigned short)49688;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2711250552U;
unsigned long long int var_17 = 2784524366010172760ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
