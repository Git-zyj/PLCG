#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1172015549;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-38;
unsigned long long int var_7 = 10727281108518336991ULL;
unsigned int var_8 = 1205862591U;
int var_9 = 545667712;
int zero = 0;
unsigned long long int var_13 = 151055122421611680ULL;
unsigned long long int var_14 = 7185555642604441301ULL;
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
