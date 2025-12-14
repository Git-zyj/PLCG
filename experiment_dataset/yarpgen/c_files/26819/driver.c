#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 381253124687210051LL;
long long int var_15 = -662304870558805454LL;
int zero = 0;
unsigned long long int var_20 = 14987416986447566080ULL;
unsigned char var_21 = (unsigned char)71;
unsigned int var_22 = 2708565995U;
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
