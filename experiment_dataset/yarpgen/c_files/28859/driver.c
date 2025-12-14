#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_2 = (signed char)56;
signed char var_5 = (signed char)-116;
signed char var_6 = (signed char)-18;
signed char var_8 = (signed char)-57;
signed char var_9 = (signed char)-43;
signed char var_10 = (signed char)-108;
int zero = 0;
signed char var_11 = (signed char)47;
signed char var_12 = (signed char)3;
signed char var_13 = (signed char)-10;
signed char var_14 = (signed char)23;
signed char var_15 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
