#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8467421168763037480LL;
_Bool var_1 = (_Bool)1;
long long int var_7 = 8966115158746925592LL;
short var_8 = (short)21342;
int var_11 = 904927804;
unsigned int var_13 = 1861821891U;
int zero = 0;
long long int var_14 = 107481437501248126LL;
short var_15 = (short)5633;
void init() {
}

void checksum() {
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
