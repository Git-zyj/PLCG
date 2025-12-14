#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3832602555U;
unsigned int var_2 = 3042915466U;
signed char var_4 = (signed char)25;
unsigned int var_5 = 3960333549U;
int var_8 = -1457355008;
unsigned int var_10 = 3913854087U;
int zero = 0;
long long int var_11 = 4693841664907243369LL;
long long int var_12 = 7954155771968231384LL;
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
