#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921900713;
int var_4 = 293414343;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 1521990318788158343ULL;
_Bool var_7 = (_Bool)0;
int var_9 = 190842416;
int var_10 = 97571806;
int zero = 0;
signed char var_11 = (signed char)9;
int var_12 = -1676064100;
signed char var_13 = (signed char)-39;
int var_14 = -1381331351;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
