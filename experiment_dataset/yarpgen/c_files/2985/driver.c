#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3255792880764943766LL;
signed char var_2 = (signed char)57;
long long int var_6 = 2843519017223245763LL;
unsigned int var_8 = 2894717113U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1127966101U;
unsigned int var_16 = 2906768094U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
