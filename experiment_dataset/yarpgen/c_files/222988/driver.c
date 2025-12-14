#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8910438449445353831LL;
long long int var_3 = -6981371764918652380LL;
long long int var_7 = -7767401887349149675LL;
unsigned char var_8 = (unsigned char)245;
long long int var_9 = -8003475659254235632LL;
int var_10 = -188720364;
int zero = 0;
short var_11 = (short)6905;
unsigned short var_12 = (unsigned short)11610;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
