#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3737537387U;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = -1045602591;
unsigned int var_9 = 1166825454U;
int zero = 0;
unsigned long long int var_10 = 11060376980472586065ULL;
signed char var_11 = (signed char)-112;
unsigned long long int var_12 = 3288667689953856316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
