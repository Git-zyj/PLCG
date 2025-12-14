#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14041;
long long int var_4 = 7909880966120603956LL;
unsigned int var_5 = 17955567U;
unsigned int var_9 = 1017488728U;
long long int var_11 = 2023896619910223391LL;
short var_12 = (short)848;
long long int var_13 = -7434012554860833366LL;
unsigned int var_15 = 2174010128U;
short var_16 = (short)-3645;
int zero = 0;
unsigned int var_17 = 276081618U;
short var_18 = (short)-27556;
long long int var_19 = 5322710846871814233LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
