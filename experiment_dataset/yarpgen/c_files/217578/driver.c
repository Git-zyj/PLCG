#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4229832765334050167ULL;
unsigned long long int var_1 = 1259800185632619382ULL;
unsigned long long int var_2 = 17329741134735848027ULL;
unsigned long long int var_3 = 15540071007773541117ULL;
unsigned long long int var_4 = 12444831190650137542ULL;
unsigned long long int var_6 = 13735325061481062288ULL;
unsigned long long int var_7 = 5388577067779129716ULL;
unsigned long long int var_8 = 10618180938851657852ULL;
unsigned long long int var_9 = 11890014926977209132ULL;
unsigned long long int var_12 = 3950656115178180897ULL;
unsigned long long int var_13 = 13313153223665013486ULL;
int zero = 0;
unsigned long long int var_14 = 6642630659316928183ULL;
unsigned long long int var_15 = 17545447556873718759ULL;
unsigned long long int var_16 = 10151346684543184808ULL;
unsigned long long int var_17 = 15828579290927362968ULL;
unsigned long long int var_18 = 6241841933154596498ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
