#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24508;
unsigned short var_3 = (unsigned short)50617;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 777948212636462649ULL;
short var_8 = (short)-23619;
int zero = 0;
short var_10 = (short)13159;
unsigned long long int var_11 = 3417897107649208452ULL;
int var_12 = 1298570269;
_Bool var_13 = (_Bool)0;
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
