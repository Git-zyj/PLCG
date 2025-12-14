#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1947929159U;
long long int var_4 = 3690627578716925967LL;
signed char var_8 = (signed char)82;
unsigned short var_10 = (unsigned short)31133;
long long int var_15 = 6839274519598193463LL;
unsigned char var_18 = (unsigned char)223;
int zero = 0;
int var_19 = -1684458235;
long long int var_20 = 419097161963956036LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
