#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1825569812539650295LL;
signed char var_4 = (signed char)-100;
int var_5 = 1271114398;
int var_6 = -1177923760;
short var_7 = (short)11887;
int zero = 0;
long long int var_11 = -8506089021555577797LL;
unsigned char var_12 = (unsigned char)126;
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
