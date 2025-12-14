#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
long long int var_3 = -3625605261800799547LL;
unsigned short var_5 = (unsigned short)18689;
int zero = 0;
long long int var_12 = 1169601307752561369LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)42572;
void init() {
}

void checksum() {
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
