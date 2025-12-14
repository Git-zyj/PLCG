#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35227;
unsigned short var_3 = (unsigned short)6570;
unsigned short var_5 = (unsigned short)27165;
short var_6 = (short)21063;
int zero = 0;
unsigned long long int var_10 = 10773920442298548979ULL;
unsigned long long int var_11 = 639833917738610144ULL;
short var_12 = (short)-11944;
unsigned long long int var_13 = 3218821673785111919ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
