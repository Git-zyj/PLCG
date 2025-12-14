#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 195230081;
unsigned short var_6 = (unsigned short)4547;
long long int var_8 = -2798660926328887482LL;
long long int var_11 = 4947735306197041613LL;
int zero = 0;
short var_12 = (short)31815;
unsigned short var_13 = (unsigned short)4083;
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
