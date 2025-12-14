#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1381757516336411769LL;
long long int var_1 = 3109650818366912537LL;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)241;
signed char var_4 = (signed char)-115;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
unsigned long long int var_11 = 4067923786548754390ULL;
int var_12 = -643988824;
int var_13 = -1871662753;
int var_14 = -635943846;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
