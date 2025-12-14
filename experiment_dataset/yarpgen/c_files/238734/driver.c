#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
short var_4 = (short)1029;
unsigned char var_7 = (unsigned char)161;
short var_18 = (short)19349;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -829706729;
short var_21 = (short)-13278;
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
