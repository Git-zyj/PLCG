#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4276902896U;
long long int var_2 = 8209954640774304781LL;
long long int var_4 = -3165090706750894216LL;
unsigned long long int var_6 = 13051069102944747527ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_17 = (signed char)94;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3194380719462978426ULL;
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
