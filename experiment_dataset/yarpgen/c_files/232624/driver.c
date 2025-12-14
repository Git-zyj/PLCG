#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3740473312832685908LL;
unsigned int var_3 = 3894654218U;
int var_8 = -742342694;
unsigned long long int var_9 = 7826232317238027445ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 12276978681604549657ULL;
unsigned long long int var_16 = 7155395160753777754ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
