#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
unsigned short var_4 = (unsigned short)59293;
signed char var_5 = (signed char)-91;
unsigned int var_8 = 3603642516U;
int zero = 0;
signed char var_10 = (signed char)37;
signed char var_11 = (signed char)57;
signed char var_12 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
