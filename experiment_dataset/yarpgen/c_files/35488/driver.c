#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6091704332270209571LL;
long long int var_1 = -8406633178815936432LL;
unsigned short var_2 = (unsigned short)58572;
unsigned long long int var_3 = 17623084850000704785ULL;
unsigned short var_4 = (unsigned short)49832;
unsigned char var_5 = (unsigned char)86;
unsigned char var_6 = (unsigned char)124;
unsigned short var_8 = (unsigned short)667;
unsigned long long int var_9 = 16854944786199935377ULL;
long long int var_10 = 513247179548799615LL;
unsigned int var_11 = 4103302923U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9113652442995872500ULL;
int var_15 = -1874351904;
int var_16 = 1309548346;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
