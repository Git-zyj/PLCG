#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3380706028713903630ULL;
unsigned long long int var_3 = 5902438719861934692ULL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-24;
signed char var_12 = (signed char)84;
int zero = 0;
unsigned short var_15 = (unsigned short)64540;
signed char var_16 = (signed char)105;
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
