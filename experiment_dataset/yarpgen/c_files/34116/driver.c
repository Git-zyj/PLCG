#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
unsigned int var_2 = 4052375725U;
int var_4 = -1213226068;
unsigned short var_8 = (unsigned short)9380;
long long int var_15 = -446902730635499998LL;
int zero = 0;
unsigned char var_16 = (unsigned char)191;
signed char var_17 = (signed char)47;
long long int var_18 = 8350456176744016899LL;
unsigned char var_19 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
