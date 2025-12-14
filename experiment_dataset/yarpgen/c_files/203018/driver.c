#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8255866587611981623LL;
long long int var_3 = 7787993663734426910LL;
long long int var_8 = -8777337510029501661LL;
long long int var_9 = 69438831807367500LL;
short var_11 = (short)19434;
int zero = 0;
short var_13 = (short)-17868;
unsigned int var_14 = 2465505337U;
unsigned int var_15 = 2957826053U;
int var_16 = -968730897;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
