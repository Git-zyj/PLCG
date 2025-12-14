#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
unsigned short var_7 = (unsigned short)42147;
short var_8 = (short)-479;
int var_9 = -1278722882;
unsigned char var_15 = (unsigned char)161;
int zero = 0;
unsigned short var_17 = (unsigned short)22382;
signed char var_18 = (signed char)113;
unsigned char var_19 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
