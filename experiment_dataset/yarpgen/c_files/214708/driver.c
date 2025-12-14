#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1029402660U;
short var_8 = (short)12306;
long long int var_9 = 113665794405939404LL;
int zero = 0;
unsigned short var_16 = (unsigned short)41621;
long long int var_17 = 2073322616916188728LL;
signed char var_18 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
