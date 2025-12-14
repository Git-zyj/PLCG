#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11583;
short var_3 = (short)24693;
unsigned int var_6 = 1597599647U;
unsigned long long int var_9 = 5368853847484310451ULL;
unsigned char var_12 = (unsigned char)36;
unsigned long long int var_15 = 17958204258852609699ULL;
unsigned long long int var_18 = 11671146187265076750ULL;
int zero = 0;
unsigned int var_19 = 374666333U;
unsigned long long int var_20 = 6847873730147926798ULL;
unsigned char var_21 = (unsigned char)20;
signed char var_22 = (signed char)69;
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
