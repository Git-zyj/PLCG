#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
unsigned short var_3 = (unsigned short)22603;
unsigned long long int var_4 = 1847064804980838463ULL;
short var_7 = (short)24048;
long long int var_9 = -5189757967827881399LL;
long long int var_15 = -1594597398378250453LL;
long long int var_16 = 6617701376625333766LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5954904785601170479ULL;
unsigned short var_21 = (unsigned short)49416;
short var_22 = (short)-13265;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
