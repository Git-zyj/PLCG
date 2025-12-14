#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 470923203;
int var_4 = 1572627579;
unsigned char var_6 = (unsigned char)152;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)38469;
int zero = 0;
unsigned char var_10 = (unsigned char)52;
int var_11 = 1934742039;
int var_12 = -795572503;
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
