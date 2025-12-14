#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3296890264795851934LL;
unsigned long long int var_4 = 4185473686794947173ULL;
unsigned short var_5 = (unsigned short)59470;
unsigned int var_6 = 2695743629U;
unsigned long long int var_7 = 3245596646397766694ULL;
unsigned long long int var_8 = 18118421337174739075ULL;
int zero = 0;
signed char var_10 = (signed char)-8;
long long int var_11 = 7590664034973192131LL;
unsigned short var_12 = (unsigned short)13395;
unsigned short var_13 = (unsigned short)10587;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
