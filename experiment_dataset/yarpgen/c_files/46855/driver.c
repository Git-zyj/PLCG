#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52895;
long long int var_1 = 4144782235084778882LL;
short var_2 = (short)30535;
unsigned int var_3 = 2222992503U;
unsigned long long int var_5 = 13369922874477548805ULL;
unsigned long long int var_14 = 315111051802715690ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)222;
unsigned int var_19 = 1419097337U;
unsigned long long int var_20 = 8328362153877803361ULL;
void init() {
}

void checksum() {
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
