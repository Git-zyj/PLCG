#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5953268941673633872LL;
unsigned int var_5 = 2902696483U;
int var_9 = 421384056;
unsigned int var_10 = 1330144815U;
int zero = 0;
unsigned int var_20 = 1145757939U;
unsigned int var_21 = 2315218988U;
short var_22 = (short)26377;
void init() {
}

void checksum() {
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
