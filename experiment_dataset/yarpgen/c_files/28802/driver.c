#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)113;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1055973890U;
unsigned int var_9 = 3882065529U;
unsigned long long int var_10 = 2040970591126138867ULL;
unsigned long long int var_12 = 17276080614706020087ULL;
unsigned int var_13 = 2028236202U;
unsigned int var_17 = 3502514708U;
int zero = 0;
unsigned int var_19 = 3144191257U;
unsigned char var_20 = (unsigned char)247;
long long int var_21 = -6338305462211818414LL;
unsigned long long int var_22 = 17058505799810626737ULL;
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
