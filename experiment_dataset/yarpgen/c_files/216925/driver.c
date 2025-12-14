#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4095911557871304209LL;
unsigned short var_1 = (unsigned short)11307;
unsigned short var_2 = (unsigned short)25272;
unsigned long long int var_4 = 10271183884470055041ULL;
short var_6 = (short)4346;
unsigned char var_7 = (unsigned char)111;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)243;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 618870704U;
unsigned char var_16 = (unsigned char)185;
signed char var_17 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
