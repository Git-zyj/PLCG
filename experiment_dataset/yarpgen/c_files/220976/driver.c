#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3622349238695250700ULL;
signed char var_1 = (signed char)11;
long long int var_2 = 5364804827949396736LL;
_Bool var_4 = (_Bool)1;
int zero = 0;
int var_12 = -2075873549;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)38553;
void init() {
}

void checksum() {
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
