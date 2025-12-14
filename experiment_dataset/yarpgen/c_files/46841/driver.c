#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1467596823U;
unsigned int var_5 = 2942065168U;
unsigned long long int var_8 = 6079148844832342861ULL;
signed char var_11 = (signed char)3;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 159873803;
unsigned int var_16 = 3886056967U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
