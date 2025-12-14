#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)121;
unsigned short var_9 = (unsigned short)1777;
unsigned int var_15 = 3614527393U;
int zero = 0;
signed char var_20 = (signed char)-44;
short var_21 = (short)-19158;
signed char var_22 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
