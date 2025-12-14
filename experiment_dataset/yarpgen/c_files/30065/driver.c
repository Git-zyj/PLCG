#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46410;
unsigned short var_8 = (unsigned short)44831;
unsigned short var_13 = (unsigned short)27527;
int zero = 0;
unsigned long long int var_17 = 2284724586103863438ULL;
short var_18 = (short)-24540;
long long int var_19 = 6447948190087388853LL;
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
