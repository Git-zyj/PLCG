#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -308930693;
int var_4 = -355642594;
unsigned int var_6 = 47226809U;
_Bool var_8 = (_Bool)1;
int var_9 = -364188439;
int zero = 0;
signed char var_10 = (signed char)25;
unsigned int var_11 = 3974249160U;
int var_12 = 782386151;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
