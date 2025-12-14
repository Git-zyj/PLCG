#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1290130503;
unsigned short var_4 = (unsigned short)21570;
_Bool var_9 = (_Bool)1;
unsigned long long int var_15 = 4575462174693122723ULL;
int zero = 0;
int var_20 = -1336595927;
unsigned short var_21 = (unsigned short)23847;
short var_22 = (short)-11265;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
