#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
signed char var_3 = (signed char)97;
unsigned long long int var_4 = 16989875855603412398ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2516062566U;
unsigned int var_10 = 892817126U;
int zero = 0;
unsigned int var_11 = 3658167606U;
signed char var_12 = (signed char)-63;
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
