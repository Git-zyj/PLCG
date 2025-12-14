#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 325162683708002287LL;
unsigned long long int var_8 = 11724655695420159464ULL;
unsigned long long int var_9 = 9898936008426749886ULL;
unsigned long long int var_10 = 7092188590899863770ULL;
unsigned long long int var_14 = 4858139096945512343ULL;
int zero = 0;
unsigned int var_16 = 3681514560U;
unsigned long long int var_17 = 7346323448334724165ULL;
unsigned long long int var_18 = 13103766095228344954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
