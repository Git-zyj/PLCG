#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5368820491397917667ULL;
int var_4 = -748928642;
unsigned short var_6 = (unsigned short)26527;
int var_7 = 1534197881;
long long int var_9 = -4758114421856740671LL;
long long int var_11 = 7680333541803069893LL;
int zero = 0;
long long int var_12 = 1111196300470690332LL;
int var_13 = 1555088326;
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
