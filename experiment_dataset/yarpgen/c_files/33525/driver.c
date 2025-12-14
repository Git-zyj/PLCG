#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1539713330;
int var_6 = -2081946354;
long long int var_10 = -8952709536265441619LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6634;
unsigned short var_14 = (unsigned short)23479;
unsigned short var_15 = (unsigned short)4167;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
