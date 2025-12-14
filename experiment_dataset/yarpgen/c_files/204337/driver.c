#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
long long int var_1 = 1540997442878973565LL;
long long int var_3 = -7246870374257499930LL;
int var_4 = -1197214622;
unsigned int var_5 = 3422761885U;
unsigned long long int var_6 = 13185052436242511530ULL;
unsigned long long int var_8 = 8103441818614279113ULL;
int zero = 0;
unsigned long long int var_10 = 14902651681554917359ULL;
signed char var_11 = (signed char)29;
unsigned long long int var_12 = 2762750926356631819ULL;
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
