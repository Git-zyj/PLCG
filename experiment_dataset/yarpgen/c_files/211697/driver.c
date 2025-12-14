#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5445891805178812501LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)16;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
signed char var_19 = (signed char)101;
long long int var_20 = -7877025761196924660LL;
short var_21 = (short)-16896;
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
