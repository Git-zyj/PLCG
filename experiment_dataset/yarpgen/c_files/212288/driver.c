#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)84;
unsigned int var_7 = 1880839684U;
unsigned int var_14 = 3582803928U;
int zero = 0;
signed char var_17 = (signed char)-124;
signed char var_18 = (signed char)-103;
signed char var_19 = (signed char)54;
signed char var_20 = (signed char)56;
unsigned int var_21 = 3925929043U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
