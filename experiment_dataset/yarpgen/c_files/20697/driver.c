#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)32473;
unsigned char var_10 = (unsigned char)121;
unsigned long long int var_12 = 3872098244961416574ULL;
unsigned char var_13 = (unsigned char)124;
unsigned long long int var_14 = 17568974157538272688ULL;
int var_15 = -1533493459;
int zero = 0;
unsigned short var_17 = (unsigned short)25119;
unsigned int var_18 = 1544446794U;
unsigned int var_19 = 4037338695U;
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
