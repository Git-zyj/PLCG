#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1127722204;
int var_4 = -1808954416;
unsigned int var_5 = 982956882U;
int zero = 0;
int var_17 = -584134861;
unsigned short var_18 = (unsigned short)35564;
int var_19 = -142737031;
short var_20 = (short)-214;
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
