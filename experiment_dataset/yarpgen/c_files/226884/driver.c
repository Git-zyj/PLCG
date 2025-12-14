#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63202;
unsigned short var_9 = (unsigned short)45293;
unsigned int var_12 = 1496311104U;
long long int var_13 = -543422406748832194LL;
int zero = 0;
unsigned long long int var_14 = 2850094059396050474ULL;
unsigned long long int var_15 = 18343586789515277363ULL;
void init() {
}

void checksum() {
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
