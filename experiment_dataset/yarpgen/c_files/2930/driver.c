#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1440152255U;
unsigned long long int var_6 = 8443117781445670193ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 907128033U;
unsigned long long int var_10 = 5458127641980330669ULL;
unsigned char var_12 = (unsigned char)115;
int zero = 0;
int var_13 = 1321418473;
long long int var_14 = -9216338687817434196LL;
unsigned char var_15 = (unsigned char)3;
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
