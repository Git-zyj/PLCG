#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51982;
long long int var_3 = 5652152915989086048LL;
int var_11 = 1165474025;
long long int var_12 = -4986151037454809767LL;
unsigned long long int var_15 = 3095331746418150414ULL;
int zero = 0;
long long int var_16 = 6504128167565648069LL;
unsigned short var_17 = (unsigned short)15160;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
