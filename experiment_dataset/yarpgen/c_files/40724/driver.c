#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1472130261U;
short var_9 = (short)14921;
short var_10 = (short)27600;
int zero = 0;
signed char var_19 = (signed char)-11;
signed char var_20 = (signed char)57;
unsigned int var_21 = 1696972961U;
void init() {
}

void checksum() {
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
