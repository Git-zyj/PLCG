#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9509;
short var_5 = (short)5748;
signed char var_17 = (signed char)25;
int zero = 0;
unsigned short var_18 = (unsigned short)247;
unsigned int var_19 = 1993546555U;
unsigned long long int var_20 = 8557120092334013434ULL;
short var_21 = (short)-1275;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
