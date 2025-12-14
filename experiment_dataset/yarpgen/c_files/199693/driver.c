#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1020730827;
unsigned char var_3 = (unsigned char)36;
int var_4 = 1574839917;
unsigned int var_6 = 78238192U;
unsigned int var_11 = 1406553698U;
unsigned int var_13 = 3994420121U;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
