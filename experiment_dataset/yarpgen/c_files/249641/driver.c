#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3326862257U;
unsigned short var_5 = (unsigned short)25174;
signed char var_6 = (signed char)-118;
long long int var_10 = 9177369353510021870LL;
unsigned int var_12 = 1397038895U;
int zero = 0;
unsigned long long int var_14 = 15521220926308240351ULL;
unsigned int var_15 = 4202310401U;
void init() {
}

void checksum() {
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
