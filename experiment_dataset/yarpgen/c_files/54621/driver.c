#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4476623513174914291LL;
unsigned short var_8 = (unsigned short)16393;
unsigned long long int var_10 = 1495449126265808345ULL;
int var_13 = -1753644337;
int zero = 0;
signed char var_14 = (signed char)-24;
int var_15 = -1304683460;
int var_16 = -7734180;
long long int var_17 = 8178271781298782416LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
