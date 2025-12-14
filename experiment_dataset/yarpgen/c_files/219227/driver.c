#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15054;
long long int var_4 = -4645223434216681776LL;
long long int var_6 = 2077226452635864770LL;
long long int var_8 = 5491759802059008390LL;
unsigned long long int var_11 = 16250798509360824816ULL;
unsigned long long int var_17 = 17466208183283024431ULL;
int zero = 0;
unsigned long long int var_18 = 5787940569737972420ULL;
unsigned char var_19 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
