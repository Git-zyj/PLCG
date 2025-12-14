#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-52;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13844746080278458922ULL;
int var_5 = -1676354469;
unsigned int var_6 = 4195574736U;
unsigned int var_7 = 1970422954U;
int zero = 0;
signed char var_10 = (signed char)-112;
int var_11 = -2131097180;
_Bool var_12 = (_Bool)1;
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
