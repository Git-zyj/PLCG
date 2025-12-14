#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)104;
unsigned long long int var_7 = 7025079101949191216ULL;
signed char var_8 = (signed char)-57;
int zero = 0;
unsigned long long int var_20 = 1082145750570742085ULL;
unsigned long long int var_21 = 4349418308538380138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
