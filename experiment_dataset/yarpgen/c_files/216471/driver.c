#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65193;
signed char var_6 = (signed char)80;
long long int var_7 = 4392321686311267603LL;
short var_8 = (short)-7766;
long long int var_9 = 3305586240564905896LL;
int var_10 = -987882045;
_Bool var_11 = (_Bool)0;
short var_12 = (short)19245;
int zero = 0;
short var_14 = (short)25554;
int var_15 = 1547591223;
int var_16 = -834823125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
