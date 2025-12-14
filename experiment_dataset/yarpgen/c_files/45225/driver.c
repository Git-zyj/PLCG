#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
int var_2 = 254373535;
signed char var_4 = (signed char)58;
signed char var_6 = (signed char)127;
int var_8 = -1909321618;
signed char var_11 = (signed char)-72;
signed char var_12 = (signed char)98;
signed char var_14 = (signed char)13;
int zero = 0;
int var_15 = 294182709;
signed char var_16 = (signed char)-116;
signed char var_17 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
