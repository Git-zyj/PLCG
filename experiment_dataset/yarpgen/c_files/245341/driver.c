#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4042405135604940309LL;
int var_14 = 1792743926;
int var_15 = -399450732;
int var_16 = 1147078648;
int zero = 0;
unsigned short var_17 = (unsigned short)31115;
long long int var_18 = -5299638391853951602LL;
int var_19 = -858976060;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
