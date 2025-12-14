#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5013392303983397546LL;
int var_1 = 1823546104;
signed char var_5 = (signed char)103;
int var_6 = 667134650;
unsigned char var_7 = (unsigned char)30;
unsigned int var_9 = 301851209U;
unsigned int var_11 = 385637703U;
unsigned int var_14 = 2891332240U;
int var_16 = 756971850;
int zero = 0;
long long int var_18 = -9160269420115285487LL;
signed char var_19 = (signed char)89;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
