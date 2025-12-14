#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17984474398966678435ULL;
unsigned int var_2 = 637344178U;
long long int var_4 = -5280244615255957442LL;
unsigned long long int var_6 = 11549366479987587528ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)31;
int zero = 0;
signed char var_13 = (signed char)57;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17958888456118349057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
