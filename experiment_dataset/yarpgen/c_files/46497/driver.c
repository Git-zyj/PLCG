#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-33;
signed char var_4 = (signed char)-101;
unsigned short var_7 = (unsigned short)20137;
unsigned short var_11 = (unsigned short)5886;
int zero = 0;
signed char var_18 = (signed char)75;
signed char var_19 = (signed char)0;
void init() {
}

void checksum() {
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
