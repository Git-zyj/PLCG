#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 463304853U;
unsigned long long int var_3 = 15852842928209505547ULL;
short var_5 = (short)22066;
long long int var_12 = -6993878814157649890LL;
unsigned long long int var_13 = 6491262068093708613ULL;
int zero = 0;
long long int var_20 = -8744977172424808164LL;
int var_21 = -1813906284;
int var_22 = -2008499035;
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
