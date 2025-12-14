#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2488871088U;
long long int var_1 = 2707852373756328738LL;
unsigned int var_3 = 2979763633U;
long long int var_7 = 6575453956869070099LL;
long long int var_8 = 6826906412125350392LL;
unsigned int var_12 = 2669324806U;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8198760271172726122LL;
unsigned int var_15 = 2977272502U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
