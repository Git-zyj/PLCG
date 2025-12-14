#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11679;
unsigned int var_5 = 3984193357U;
unsigned long long int var_8 = 15213641277819627632ULL;
int zero = 0;
unsigned int var_11 = 1425095520U;
signed char var_12 = (signed char)-112;
void init() {
}

void checksum() {
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
