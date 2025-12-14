#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3911476627847533024LL;
unsigned char var_4 = (unsigned char)38;
unsigned long long int var_7 = 2828772407822376489ULL;
int zero = 0;
unsigned long long int var_11 = 4028896914684843150ULL;
unsigned char var_12 = (unsigned char)142;
int var_13 = 132713146;
long long int var_14 = 5368481981058558688LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
