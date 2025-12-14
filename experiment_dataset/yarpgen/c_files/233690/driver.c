#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23874;
short var_9 = (short)-774;
signed char var_17 = (signed char)-60;
signed char var_19 = (signed char)-103;
int zero = 0;
long long int var_20 = 8352194008013973419LL;
int var_21 = 821782562;
signed char var_22 = (signed char)7;
unsigned int var_23 = 863326635U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
