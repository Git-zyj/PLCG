#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
unsigned int var_2 = 2341295795U;
int var_3 = 789263842;
long long int var_5 = -7327706061494886138LL;
int zero = 0;
unsigned long long int var_10 = 4523611038330513603ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2317782137618591618ULL;
unsigned short var_13 = (unsigned short)20674;
long long int var_14 = 5968619282138069777LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
