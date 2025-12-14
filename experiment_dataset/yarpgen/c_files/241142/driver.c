#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3110299343U;
int var_2 = -253123229;
long long int var_14 = -1944779109527683686LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-20;
int var_20 = 1887252004;
short var_21 = (short)-2405;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
