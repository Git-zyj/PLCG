#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
int var_3 = 1381117529;
unsigned long long int var_4 = 4883330553471765645ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 737698031480208443ULL;
long long int var_12 = 2606113692214594377LL;
int zero = 0;
int var_13 = 504526241;
_Bool var_14 = (_Bool)0;
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
