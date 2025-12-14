#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)62837;
unsigned int var_14 = 378833386U;
short var_15 = (short)-11057;
int zero = 0;
signed char var_18 = (signed char)26;
signed char var_19 = (signed char)106;
signed char var_20 = (signed char)123;
signed char var_21 = (signed char)-113;
void init() {
}

void checksum() {
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
