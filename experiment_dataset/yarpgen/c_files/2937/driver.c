#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_7 = (unsigned char)216;
unsigned int var_10 = 1379019373U;
unsigned long long int var_11 = 9821262466295054071ULL;
long long int var_14 = 1176694958162251347LL;
unsigned long long int var_15 = 3004223968855207115ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)21788;
unsigned long long int var_17 = 5394352736327465454ULL;
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
