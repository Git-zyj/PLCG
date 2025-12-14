#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14960735862089056547ULL;
unsigned short var_3 = (unsigned short)8936;
signed char var_4 = (signed char)-48;
int zero = 0;
unsigned long long int var_13 = 7084536275957467207ULL;
long long int var_14 = 1519349578294971224LL;
unsigned int var_15 = 2717468675U;
unsigned short var_16 = (unsigned short)19418;
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
