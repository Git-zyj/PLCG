#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6108;
unsigned long long int var_15 = 4762942259652040604ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)51145;
unsigned long long int var_20 = 8073699440111291644ULL;
unsigned short var_21 = (unsigned short)58631;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
