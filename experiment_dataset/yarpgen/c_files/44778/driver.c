#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -744418145;
long long int var_5 = 1092477928878409329LL;
int var_7 = -1077938772;
unsigned char var_9 = (unsigned char)19;
unsigned long long int var_10 = 14780508231880563764ULL;
int zero = 0;
signed char var_19 = (signed char)103;
long long int var_20 = -6595447462622357803LL;
unsigned long long int var_21 = 9528406785746058255ULL;
unsigned int var_22 = 1437020887U;
unsigned int var_23 = 1698409223U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
