#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
long long int var_9 = -719220993060037819LL;
unsigned long long int var_11 = 560830987186418931ULL;
short var_19 = (short)-11898;
int zero = 0;
unsigned int var_20 = 2692538199U;
signed char var_21 = (signed char)-102;
unsigned int var_22 = 3944477824U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
