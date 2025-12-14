#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3478616132491053122LL;
long long int var_3 = 1506349568221315252LL;
unsigned int var_4 = 1476880977U;
signed char var_6 = (signed char)75;
unsigned char var_8 = (unsigned char)62;
short var_9 = (short)10560;
int zero = 0;
short var_16 = (short)12600;
int var_17 = -1740807062;
unsigned short var_18 = (unsigned short)15961;
int var_19 = 1018453658;
unsigned long long int var_20 = 8376813548038003031ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
