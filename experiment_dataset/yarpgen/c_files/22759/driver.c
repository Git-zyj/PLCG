#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)66;
long long int var_8 = 3602822328200479952LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = -3092453320385279052LL;
signed char var_16 = (signed char)-19;
int var_17 = 23131578;
int var_18 = -1095049809;
signed char var_19 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
