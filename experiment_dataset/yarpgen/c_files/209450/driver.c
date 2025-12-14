#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
short var_5 = (short)-27146;
int var_13 = -522986315;
int zero = 0;
int var_14 = 57413955;
long long int var_15 = -1025396215433990617LL;
unsigned long long int var_16 = 12589748705274652990ULL;
long long int var_17 = -3709126433963661032LL;
signed char var_18 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
