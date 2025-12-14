#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned short var_1 = (unsigned short)36565;
unsigned long long int var_12 = 7394912982252448001ULL;
long long int var_14 = -6789985568267386834LL;
int zero = 0;
unsigned short var_17 = (unsigned short)11475;
unsigned long long int var_18 = 3216376998110197988ULL;
void init() {
}

void checksum() {
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
