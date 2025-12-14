#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3653968672438704098ULL;
unsigned int var_6 = 1109536381U;
unsigned long long int var_7 = 10994082571096181257ULL;
unsigned int var_8 = 1899419538U;
unsigned int var_11 = 1001658748U;
unsigned int var_13 = 149484150U;
unsigned int var_14 = 651086511U;
unsigned int var_17 = 4226390718U;
unsigned long long int var_18 = 18161681215303937941ULL;
int zero = 0;
unsigned long long int var_20 = 10955727379702212496ULL;
unsigned long long int var_21 = 8670808324420187864ULL;
void init() {
}

void checksum() {
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
