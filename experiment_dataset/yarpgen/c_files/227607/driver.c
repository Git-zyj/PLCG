#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -806236339;
short var_9 = (short)-14559;
unsigned short var_10 = (unsigned short)35940;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16407590213372155241ULL;
void init() {
}

void checksum() {
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
