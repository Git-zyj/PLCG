#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2010550057U;
int var_4 = -2129667906;
int var_5 = -1855403871;
signed char var_6 = (signed char)-50;
long long int var_8 = 2546209325132133404LL;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned int var_11 = 690493146U;
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
