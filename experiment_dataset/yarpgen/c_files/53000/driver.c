#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned short var_1 = (unsigned short)44772;
int var_3 = -272163938;
long long int var_4 = -174681831943626243LL;
long long int var_5 = 4999449314896544297LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 6229863174670901477ULL;
signed char var_9 = (signed char)85;
unsigned long long int var_10 = 6099223170549329027ULL;
int zero = 0;
short var_12 = (short)13074;
int var_13 = -532531623;
unsigned int var_14 = 2010181965U;
unsigned int var_15 = 3009067444U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
