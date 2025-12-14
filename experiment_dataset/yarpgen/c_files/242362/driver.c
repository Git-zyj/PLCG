#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24545;
unsigned short var_2 = (unsigned short)19475;
signed char var_5 = (signed char)-4;
short var_6 = (short)-2574;
unsigned int var_7 = 3355965510U;
unsigned short var_10 = (unsigned short)60150;
long long int var_14 = 3473119079911972049LL;
unsigned short var_15 = (unsigned short)60439;
int zero = 0;
short var_17 = (short)-27324;
int var_18 = -1705428483;
int var_19 = 1778475464;
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
