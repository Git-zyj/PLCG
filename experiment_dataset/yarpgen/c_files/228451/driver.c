#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6520897493770137594LL;
long long int var_9 = 3751572101290235844LL;
long long int var_10 = 1185137767147768839LL;
unsigned long long int var_12 = 2819743462826176240ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)103;
long long int var_14 = 2274875224509446929LL;
unsigned int var_15 = 433270794U;
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
