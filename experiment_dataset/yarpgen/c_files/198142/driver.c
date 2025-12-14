#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
signed char var_3 = (signed char)81;
int var_10 = -293106074;
int zero = 0;
long long int var_12 = 5653264080705346621LL;
unsigned long long int var_13 = 6027300318037437869ULL;
signed char var_14 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
