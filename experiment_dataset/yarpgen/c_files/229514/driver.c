#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15734929156969761264ULL;
int var_1 = 201187617;
unsigned int var_2 = 246459623U;
signed char var_5 = (signed char)36;
int var_6 = -1514397707;
unsigned long long int var_8 = 7050668706055066967ULL;
long long int var_9 = 7403318640703482398LL;
int var_10 = -1261673277;
int zero = 0;
unsigned int var_12 = 1417142616U;
unsigned char var_13 = (unsigned char)247;
short var_14 = (short)-8865;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
