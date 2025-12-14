#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -153982431;
unsigned int var_4 = 2018701342U;
unsigned long long int var_6 = 9916102385579625781ULL;
_Bool var_9 = (_Bool)0;
long long int var_14 = -3380643079287010588LL;
int zero = 0;
unsigned int var_20 = 1179249246U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
