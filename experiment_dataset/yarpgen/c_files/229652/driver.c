#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -641495240;
int var_2 = -1634487284;
int var_3 = 1262561728;
unsigned int var_4 = 3481446082U;
signed char var_8 = (signed char)33;
int var_9 = -1351128077;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
long long int var_11 = -5732353388872826601LL;
int var_12 = 919080865;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
