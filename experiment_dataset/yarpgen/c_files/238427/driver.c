#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
signed char var_3 = (signed char)29;
unsigned int var_5 = 2423017188U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2666772666U;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-59;
int zero = 0;
unsigned int var_13 = 1637714629U;
signed char var_14 = (signed char)-6;
void init() {
}

void checksum() {
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
