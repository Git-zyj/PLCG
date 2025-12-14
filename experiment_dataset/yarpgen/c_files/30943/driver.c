#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30150;
short var_2 = (short)17802;
unsigned short var_5 = (unsigned short)23600;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3625035994U;
int zero = 0;
long long int var_10 = 3741985996179244685LL;
unsigned short var_11 = (unsigned short)23546;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
