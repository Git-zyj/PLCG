#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
short var_1 = (short)-4832;
unsigned short var_2 = (unsigned short)48022;
unsigned long long int var_3 = 1483517278509480758ULL;
signed char var_4 = (signed char)111;
short var_6 = (short)753;
int zero = 0;
short var_10 = (short)-9920;
unsigned int var_11 = 444674961U;
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
