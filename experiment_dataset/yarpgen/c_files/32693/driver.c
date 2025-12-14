#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25986;
long long int var_2 = 3460605420565481510LL;
unsigned int var_3 = 2288474430U;
short var_4 = (short)19627;
long long int var_5 = 1913294989087006072LL;
unsigned short var_11 = (unsigned short)56216;
long long int var_16 = -7031839171296551557LL;
int zero = 0;
long long int var_17 = -8634393379621189007LL;
long long int var_18 = -949616503238888627LL;
void init() {
}

void checksum() {
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
