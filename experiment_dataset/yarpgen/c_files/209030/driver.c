#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1058998596589303900LL;
unsigned short var_4 = (unsigned short)14995;
long long int var_5 = -6055983074069028970LL;
unsigned short var_9 = (unsigned short)4900;
unsigned long long int var_12 = 4531226958837254026ULL;
long long int var_13 = 3641802105461947954LL;
unsigned long long int var_15 = 9395660962361254898ULL;
int zero = 0;
unsigned long long int var_16 = 13273927648511240624ULL;
long long int var_17 = -1063167423584979326LL;
unsigned long long int var_18 = 3824185452168789827ULL;
unsigned long long int var_19 = 3206158204447416777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
