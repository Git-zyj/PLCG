#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3710090200U;
long long int var_7 = -1018769933871862794LL;
signed char var_9 = (signed char)-83;
int zero = 0;
signed char var_17 = (signed char)-69;
short var_18 = (short)-5486;
short var_19 = (short)-21019;
void init() {
}

void checksum() {
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
