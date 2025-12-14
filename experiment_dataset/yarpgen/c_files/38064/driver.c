#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3425383707142272327LL;
signed char var_8 = (signed char)-69;
unsigned int var_10 = 539330077U;
short var_11 = (short)4578;
int zero = 0;
unsigned int var_13 = 1755420661U;
unsigned short var_14 = (unsigned short)1647;
unsigned char var_15 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
