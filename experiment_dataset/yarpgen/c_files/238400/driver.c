#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
short var_2 = (short)-9075;
signed char var_5 = (signed char)-12;
signed char var_7 = (signed char)-105;
unsigned int var_9 = 2175295670U;
signed char var_10 = (signed char)68;
int zero = 0;
long long int var_14 = -4490893163852964986LL;
unsigned long long int var_15 = 10267607172978929427ULL;
void init() {
}

void checksum() {
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
