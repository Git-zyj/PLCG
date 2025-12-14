#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1547735817;
_Bool var_6 = (_Bool)1;
long long int var_8 = 1217687876952590603LL;
unsigned char var_12 = (unsigned char)193;
int zero = 0;
unsigned char var_13 = (unsigned char)60;
unsigned char var_14 = (unsigned char)157;
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
