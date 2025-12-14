#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15294002859262964555ULL;
long long int var_3 = -7116331740966886995LL;
unsigned char var_4 = (unsigned char)165;
unsigned int var_5 = 52138228U;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned int var_11 = 1853291133U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
