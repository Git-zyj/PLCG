#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 408736214267975355ULL;
short var_3 = (short)-4913;
unsigned long long int var_5 = 14363829140969064708ULL;
short var_6 = (short)24787;
unsigned short var_7 = (unsigned short)13007;
int zero = 0;
unsigned short var_12 = (unsigned short)37271;
unsigned long long int var_13 = 4353231587688310602ULL;
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
