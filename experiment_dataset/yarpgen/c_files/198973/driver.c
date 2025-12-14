#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3421170708831282083LL;
unsigned short var_13 = (unsigned short)62293;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 8616869898790885968LL;
unsigned short var_17 = (unsigned short)57972;
int var_18 = -1647968714;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
