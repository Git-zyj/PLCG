#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15465191314283378645ULL;
unsigned char var_3 = (unsigned char)4;
long long int var_6 = -2751040055339220340LL;
int zero = 0;
unsigned short var_10 = (unsigned short)62351;
unsigned short var_11 = (unsigned short)22787;
unsigned short var_12 = (unsigned short)38874;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
