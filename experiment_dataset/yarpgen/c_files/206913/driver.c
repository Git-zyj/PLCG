#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5905350637031445627ULL;
_Bool var_7 = (_Bool)1;
int var_12 = -768479084;
int zero = 0;
int var_19 = 626637887;
unsigned long long int var_20 = 7881666823499718396ULL;
short var_21 = (short)3101;
signed char var_22 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
