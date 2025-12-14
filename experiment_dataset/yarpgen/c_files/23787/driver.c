#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13932146958633254579ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_7 = 460862821U;
signed char var_9 = (signed char)81;
signed char var_10 = (signed char)103;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 68336369U;
unsigned long long int var_13 = 4643349089805124623ULL;
int zero = 0;
int var_15 = -522229124;
unsigned char var_16 = (unsigned char)253;
int var_17 = -894993302;
unsigned long long int var_18 = 8976164841935344497ULL;
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
