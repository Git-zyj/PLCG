#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_10 = (short)9911;
long long int var_18 = 4795055153559603714LL;
unsigned short var_19 = (unsigned short)15344;
int zero = 0;
signed char var_20 = (signed char)-43;
unsigned char var_21 = (unsigned char)153;
unsigned int var_22 = 618439639U;
short var_23 = (short)-3050;
short var_24 = (short)16927;
short var_25 = (short)8658;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
