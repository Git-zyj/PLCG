#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15660;
unsigned short var_6 = (unsigned short)33885;
signed char var_8 = (signed char)-31;
long long int var_11 = 1325701336411143224LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 8097135070187758075ULL;
short var_16 = (short)-5160;
void init() {
}

void checksum() {
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
