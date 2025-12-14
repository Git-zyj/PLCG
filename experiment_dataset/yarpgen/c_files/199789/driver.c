#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11065901959528569964ULL;
unsigned long long int var_3 = 17732178857526004058ULL;
int var_4 = -1159667840;
signed char var_5 = (signed char)97;
unsigned long long int var_6 = 655879613410368167ULL;
signed char var_8 = (signed char)-87;
short var_13 = (short)17480;
unsigned short var_16 = (unsigned short)38428;
int zero = 0;
unsigned char var_19 = (unsigned char)247;
long long int var_20 = 1992569452030931504LL;
signed char var_21 = (signed char)-3;
unsigned long long int var_22 = 4248705942590505058ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
