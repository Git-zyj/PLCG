#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1102793469U;
unsigned short var_5 = (unsigned short)62861;
unsigned short var_12 = (unsigned short)58920;
_Bool var_13 = (_Bool)1;
unsigned long long int var_18 = 9428350261653282444ULL;
int zero = 0;
int var_20 = 1176091891;
unsigned int var_21 = 3396808974U;
unsigned short var_22 = (unsigned short)52003;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
