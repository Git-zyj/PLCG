#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)23;
int var_4 = -515313261;
short var_7 = (short)24703;
short var_8 = (short)28759;
int var_9 = 467028790;
int var_10 = -637987235;
unsigned char var_11 = (unsigned char)210;
short var_15 = (short)-29491;
long long int var_17 = 2442499096249753072LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15701959186398326135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
