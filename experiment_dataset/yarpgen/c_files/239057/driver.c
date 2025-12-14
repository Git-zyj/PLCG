#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8006372318358363815ULL;
_Bool var_2 = (_Bool)1;
int var_4 = 1005928279;
unsigned long long int var_5 = 168575083367525369ULL;
long long int var_6 = -1916456013513479925LL;
int var_7 = 826768260;
int zero = 0;
int var_10 = 522292902;
unsigned int var_11 = 878484148U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
