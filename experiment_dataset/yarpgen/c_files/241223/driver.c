#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -95384002992159492LL;
long long int var_2 = 3093257860278877986LL;
unsigned long long int var_3 = 8204701564011450473ULL;
int var_4 = 1464864808;
long long int var_7 = -8051449887897054898LL;
long long int var_15 = -1972649984813398000LL;
int zero = 0;
long long int var_16 = -510106252504637423LL;
short var_17 = (short)-19879;
int var_18 = -1023555338;
unsigned char var_19 = (unsigned char)2;
unsigned int var_20 = 1772830746U;
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
