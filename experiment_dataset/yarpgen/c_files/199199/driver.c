#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1241678251;
_Bool var_2 = (_Bool)0;
unsigned int var_9 = 3279812332U;
unsigned int var_15 = 1581532339U;
int zero = 0;
unsigned int var_19 = 573670033U;
signed char var_20 = (signed char)-55;
unsigned long long int var_21 = 18125087317370965423ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
