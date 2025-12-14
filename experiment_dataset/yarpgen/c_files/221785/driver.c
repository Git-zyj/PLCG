#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned int var_2 = 1394065242U;
short var_7 = (short)-6767;
int var_9 = 238836116;
int zero = 0;
long long int var_15 = 4956227085053173907LL;
long long int var_16 = -3994151223882418438LL;
unsigned char var_17 = (unsigned char)122;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
