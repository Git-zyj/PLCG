#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29487;
short var_3 = (short)6740;
int var_4 = 714224581;
short var_9 = (short)-11634;
short var_11 = (short)-18389;
int zero = 0;
unsigned char var_18 = (unsigned char)198;
long long int var_19 = -5295094151792922747LL;
void init() {
}

void checksum() {
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
