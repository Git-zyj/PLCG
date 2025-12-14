#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8288542439939279151ULL;
signed char var_1 = (signed char)65;
signed char var_2 = (signed char)30;
unsigned long long int var_3 = 18152603058116338036ULL;
unsigned long long int var_8 = 3685306268304490938ULL;
unsigned int var_11 = 3304986182U;
int zero = 0;
unsigned long long int var_13 = 9038125053658747147ULL;
unsigned long long int var_14 = 12899528129858458275ULL;
void init() {
}

void checksum() {
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
