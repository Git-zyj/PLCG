#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 260056365;
signed char var_8 = (signed char)-95;
unsigned long long int var_9 = 5655643720123970089ULL;
unsigned int var_18 = 137302953U;
int zero = 0;
signed char var_20 = (signed char)38;
unsigned int var_21 = 3140304138U;
unsigned char var_22 = (unsigned char)188;
_Bool var_23 = (_Bool)0;
int var_24 = -1721320533;
void init() {
}

void checksum() {
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
