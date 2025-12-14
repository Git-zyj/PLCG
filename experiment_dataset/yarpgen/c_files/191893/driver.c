#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49718;
short var_2 = (short)-29046;
short var_3 = (short)-32113;
unsigned long long int var_6 = 11273986884978022340ULL;
unsigned long long int var_9 = 5633019812079730486ULL;
unsigned long long int var_10 = 9562202697103346273ULL;
int zero = 0;
long long int var_12 = -8780337958585864196LL;
unsigned short var_13 = (unsigned short)49190;
void init() {
}

void checksum() {
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
