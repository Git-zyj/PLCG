#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 776993872U;
long long int var_2 = 7314211776031036380LL;
unsigned long long int var_3 = 8444749984863862420ULL;
unsigned long long int var_4 = 1702117791637837643ULL;
long long int var_10 = -4986317695882630383LL;
unsigned long long int var_12 = 9665212865190069702ULL;
int zero = 0;
short var_13 = (short)-16100;
long long int var_14 = 7334936605315444504LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
