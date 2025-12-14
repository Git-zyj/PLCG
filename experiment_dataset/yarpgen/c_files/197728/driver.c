#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 303134284;
_Bool var_1 = (_Bool)0;
int var_2 = -852400272;
_Bool var_3 = (_Bool)1;
long long int var_7 = -4610885831363337271LL;
short var_9 = (short)-10026;
signed char var_12 = (signed char)-47;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
int var_21 = 400140472;
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
