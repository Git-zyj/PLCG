#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2245012859U;
unsigned int var_7 = 3182486429U;
int var_8 = 1314700045;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)108;
unsigned short var_13 = (unsigned short)31322;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
