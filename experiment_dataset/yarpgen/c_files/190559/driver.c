#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)79;
short var_8 = (short)19648;
long long int var_10 = 8177708392152267090LL;
int var_13 = -4578571;
int zero = 0;
int var_15 = 2091769900;
long long int var_16 = -3527044271836153711LL;
long long int var_17 = 4169406762394980082LL;
long long int var_18 = 7436502268960638419LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
