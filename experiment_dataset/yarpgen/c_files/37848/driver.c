#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)28;
signed char var_7 = (signed char)82;
signed char var_9 = (signed char)106;
signed char var_11 = (signed char)(-127 - 1);
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)117;
unsigned char var_15 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
