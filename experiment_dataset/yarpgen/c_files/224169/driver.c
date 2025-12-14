#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
signed char var_2 = (signed char)18;
signed char var_4 = (signed char)111;
signed char var_6 = (signed char)124;
signed char var_7 = (signed char)-41;
signed char var_8 = (signed char)-19;
signed char var_9 = (signed char)27;
signed char var_11 = (signed char)85;
int zero = 0;
signed char var_12 = (signed char)-41;
signed char var_13 = (signed char)-79;
signed char var_14 = (signed char)105;
void init() {
}

void checksum() {
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
