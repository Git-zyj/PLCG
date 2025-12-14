#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9032017447965888193ULL;
unsigned int var_3 = 2656258929U;
unsigned long long int var_4 = 2947070799056296071ULL;
short var_5 = (short)-916;
signed char var_7 = (signed char)-51;
unsigned int var_8 = 1092395110U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = -671022931846266702LL;
short var_13 = (short)-2691;
unsigned long long int var_14 = 1668880529302872072ULL;
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
