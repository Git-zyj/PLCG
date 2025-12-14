#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15364;
long long int var_8 = 3596926530772492774LL;
long long int var_10 = 5646379726992964581LL;
short var_11 = (short)17069;
signed char var_13 = (signed char)14;
unsigned long long int var_15 = 6832370360710278856ULL;
int zero = 0;
unsigned int var_16 = 1202009814U;
signed char var_17 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
