#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
short var_2 = (short)-20772;
unsigned int var_3 = 963036840U;
short var_5 = (short)-5358;
long long int var_7 = 228178114829764718LL;
unsigned int var_16 = 1919133166U;
int zero = 0;
short var_20 = (short)15649;
unsigned long long int var_21 = 17990039421900370419ULL;
unsigned char var_22 = (unsigned char)174;
unsigned int var_23 = 1072564680U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
