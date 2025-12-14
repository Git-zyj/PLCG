#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13247;
long long int var_2 = -7623281598831294911LL;
int var_4 = -783220378;
unsigned short var_8 = (unsigned short)16759;
unsigned int var_9 = 523353117U;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-10232;
signed char var_16 = (signed char)10;
int zero = 0;
int var_17 = -1073056167;
signed char var_18 = (signed char)14;
long long int var_19 = -2697365408659768671LL;
int var_20 = 347058696;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
