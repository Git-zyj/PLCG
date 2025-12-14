#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18404300067355335331ULL;
unsigned long long int var_3 = 10955971059333678638ULL;
unsigned long long int var_4 = 4108605467554544294ULL;
unsigned long long int var_8 = 13359012628538167397ULL;
int zero = 0;
unsigned long long int var_10 = 11648629978003314569ULL;
unsigned long long int var_11 = 16213057684247357227ULL;
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
