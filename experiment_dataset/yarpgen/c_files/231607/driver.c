#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
_Bool var_3 = (_Bool)0;
int var_4 = -508288734;
unsigned char var_5 = (unsigned char)8;
long long int var_17 = 746155434572584067LL;
int zero = 0;
long long int var_19 = 3417922048551391843LL;
unsigned char var_20 = (unsigned char)66;
unsigned char var_21 = (unsigned char)89;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)73;
long long int var_24 = 5718202135083630536LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
