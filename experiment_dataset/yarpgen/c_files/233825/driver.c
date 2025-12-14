#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3889186574U;
unsigned long long int var_3 = 690453816829012535ULL;
long long int var_4 = 2606357484376270740LL;
long long int var_7 = -4282132498819687783LL;
short var_8 = (short)31930;
short var_16 = (short)-5532;
int zero = 0;
unsigned short var_19 = (unsigned short)17107;
long long int var_20 = -6050031659918827500LL;
void init() {
}

void checksum() {
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
