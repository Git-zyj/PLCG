#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7410;
signed char var_8 = (signed char)60;
long long int var_14 = 477761281285057743LL;
unsigned char var_15 = (unsigned char)67;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-35;
_Bool var_21 = (_Bool)0;
long long int var_22 = 8033887323912579728LL;
void init() {
}

void checksum() {
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
