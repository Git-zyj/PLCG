#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)26084;
signed char var_13 = (signed char)-26;
unsigned long long int var_17 = 619008047092763514ULL;
int zero = 0;
long long int var_20 = 5752256941807147714LL;
unsigned int var_21 = 3231052233U;
void init() {
}

void checksum() {
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
