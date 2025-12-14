#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1375575688922790251LL;
long long int var_1 = 583231498274574822LL;
signed char var_3 = (signed char)58;
signed char var_5 = (signed char)114;
unsigned int var_8 = 2958795575U;
long long int var_12 = 4992242884968267930LL;
int zero = 0;
signed char var_13 = (signed char)98;
unsigned int var_14 = 2682246923U;
long long int var_15 = 3614149299081392922LL;
unsigned long long int var_16 = 7507228986752031051ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
