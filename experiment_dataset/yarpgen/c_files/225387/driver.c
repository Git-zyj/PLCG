#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 345135703;
int var_4 = 1923723023;
int var_7 = -874042609;
int var_11 = 2134163343;
int var_14 = -374985182;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 402640391;
_Bool var_20 = (_Bool)1;
int var_21 = -1713303645;
int var_22 = 527624018;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
