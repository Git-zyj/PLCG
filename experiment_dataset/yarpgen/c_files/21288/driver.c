#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1351002273;
int var_4 = -1835311541;
signed char var_5 = (signed char)-104;
signed char var_6 = (signed char)49;
signed char var_7 = (signed char)73;
int zero = 0;
long long int var_10 = 2981858554102754641LL;
unsigned long long int var_11 = 9613896525966115815ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -1215357688;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
