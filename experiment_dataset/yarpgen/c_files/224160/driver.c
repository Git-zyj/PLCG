#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1359748070;
unsigned int var_4 = 3871288853U;
long long int var_6 = 6983216211449356317LL;
short var_8 = (short)-13665;
int var_9 = -1819597849;
int zero = 0;
short var_11 = (short)-7526;
signed char var_12 = (signed char)-37;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
