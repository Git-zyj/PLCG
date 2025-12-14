#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 381230763265778286LL;
long long int var_4 = 5228027310255968264LL;
long long int var_7 = 6264936351065800192LL;
unsigned long long int var_9 = 4957247472301205602ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60857;
short var_13 = (short)-12927;
unsigned short var_14 = (unsigned short)61624;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
