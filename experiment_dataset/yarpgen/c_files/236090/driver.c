#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7079693351812445692LL;
long long int var_1 = -484529585362926944LL;
int var_7 = 1324607347;
long long int var_8 = -3693923382081326765LL;
long long int var_9 = -3225977768767295634LL;
int zero = 0;
unsigned char var_10 = (unsigned char)40;
long long int var_11 = -7780734481838555838LL;
unsigned char var_12 = (unsigned char)214;
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
