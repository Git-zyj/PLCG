#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
signed char var_2 = (signed char)-40;
signed char var_4 = (signed char)-127;
signed char var_5 = (signed char)-18;
signed char var_6 = (signed char)117;
signed char var_7 = (signed char)96;
unsigned char var_8 = (unsigned char)214;
signed char var_9 = (signed char)-42;
int zero = 0;
signed char var_10 = (signed char)82;
unsigned char var_11 = (unsigned char)163;
signed char var_12 = (signed char)76;
signed char var_13 = (signed char)13;
signed char var_14 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
