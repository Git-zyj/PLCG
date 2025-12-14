#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10904;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)64402;
int zero = 0;
unsigned long long int var_12 = 15585924255446037690ULL;
unsigned long long int var_13 = 3058774199101232686ULL;
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
