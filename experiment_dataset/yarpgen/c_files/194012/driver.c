#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2135610839;
unsigned long long int var_2 = 14178587531644370293ULL;
int var_6 = -573515373;
long long int var_7 = -2275925911781982902LL;
unsigned long long int var_9 = 4436557756548550548ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 7849341564370084230LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)30067;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
