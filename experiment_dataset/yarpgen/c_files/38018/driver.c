#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned long long int var_2 = 4048834339113880755ULL;
unsigned long long int var_3 = 9041215479612302823ULL;
long long int var_6 = 6146237636888206183LL;
unsigned long long int var_8 = 3795424720003305059ULL;
signed char var_11 = (signed char)-91;
long long int var_13 = -6654682551596363666LL;
int zero = 0;
int var_16 = 2064999565;
unsigned long long int var_17 = 10935742906204715089ULL;
void init() {
}

void checksum() {
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
