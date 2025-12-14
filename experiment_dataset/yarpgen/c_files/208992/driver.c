#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 500016153;
long long int var_1 = -7584220356776875525LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -1583349729960850993LL;
unsigned char var_6 = (unsigned char)108;
unsigned int var_7 = 1192700972U;
int var_8 = 130292191;
unsigned short var_9 = (unsigned short)28589;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
