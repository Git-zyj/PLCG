#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned short var_1 = (unsigned short)12111;
int var_3 = 1774053546;
short var_6 = (short)15618;
int var_11 = 1940194378;
long long int var_14 = 2428161646671529808LL;
unsigned int var_17 = 1445010743U;
int var_18 = -1207567604;
int zero = 0;
unsigned short var_19 = (unsigned short)25443;
short var_20 = (short)2233;
unsigned short var_21 = (unsigned short)44676;
void init() {
}

void checksum() {
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
