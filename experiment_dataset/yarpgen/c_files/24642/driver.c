#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
short var_1 = (short)-10629;
unsigned short var_2 = (unsigned short)10546;
unsigned long long int var_4 = 1106955445193877904ULL;
unsigned char var_6 = (unsigned char)66;
unsigned long long int var_7 = 11760656158225030658ULL;
signed char var_8 = (signed char)102;
long long int var_9 = 1365410655843452692LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 15685702228530316910ULL;
short var_15 = (short)-26360;
signed char var_16 = (signed char)92;
unsigned int var_17 = 3367885000U;
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
