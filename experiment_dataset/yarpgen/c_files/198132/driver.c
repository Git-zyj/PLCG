#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26694;
signed char var_2 = (signed char)94;
signed char var_6 = (signed char)-73;
short var_7 = (short)-10332;
int zero = 0;
short var_11 = (short)-16181;
unsigned int var_12 = 2593169536U;
long long int var_13 = -4578721090052535471LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
