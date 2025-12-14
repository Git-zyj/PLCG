#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 254245079U;
_Bool var_1 = (_Bool)1;
int var_2 = -393486015;
unsigned long long int var_4 = 7842758717671390709ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)84;
unsigned long long int var_9 = 2976101189430528372ULL;
int zero = 0;
int var_10 = 181348080;
unsigned long long int var_11 = 2023842035720467449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
