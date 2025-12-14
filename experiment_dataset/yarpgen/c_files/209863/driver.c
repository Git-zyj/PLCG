#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
int var_1 = 1621352817;
short var_2 = (short)5487;
unsigned int var_3 = 1763444972U;
int var_4 = -936975667;
unsigned long long int var_8 = 5576851604759996003ULL;
unsigned short var_9 = (unsigned short)19825;
int zero = 0;
int var_11 = -1087108420;
signed char var_12 = (signed char)-25;
unsigned int var_13 = 2954214565U;
void init() {
}

void checksum() {
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
