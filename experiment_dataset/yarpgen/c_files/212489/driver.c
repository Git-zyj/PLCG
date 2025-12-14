#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
int var_1 = 543328026;
unsigned short var_13 = (unsigned short)45496;
unsigned short var_16 = (unsigned short)29787;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 665949748472729653ULL;
unsigned long long int var_20 = 8956476002302313715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
