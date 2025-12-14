#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned int var_1 = 2178002470U;
unsigned char var_2 = (unsigned char)216;
short var_4 = (short)6497;
unsigned int var_6 = 251607185U;
unsigned int var_7 = 1286510212U;
unsigned int var_9 = 952310665U;
long long int var_13 = -2793180273172685014LL;
unsigned int var_15 = 1500263864U;
unsigned int var_16 = 4199180108U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)17814;
_Bool var_21 = (_Bool)0;
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
