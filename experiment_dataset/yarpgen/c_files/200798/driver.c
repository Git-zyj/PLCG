#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 65626961U;
int var_2 = 159619559;
short var_4 = (short)-9332;
short var_8 = (short)22309;
int zero = 0;
unsigned short var_10 = (unsigned short)24668;
int var_11 = -1364184008;
unsigned short var_12 = (unsigned short)51154;
long long int var_13 = 370675824831392653LL;
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
