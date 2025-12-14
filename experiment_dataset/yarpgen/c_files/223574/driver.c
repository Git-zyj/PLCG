#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3055993164U;
unsigned int var_1 = 509531919U;
unsigned int var_2 = 1414871138U;
unsigned long long int var_3 = 4314319779276244096ULL;
unsigned int var_4 = 731072465U;
unsigned int var_5 = 3271750207U;
int var_6 = -236716816;
unsigned int var_7 = 4090398824U;
unsigned int var_8 = 3157935649U;
int zero = 0;
unsigned int var_10 = 1469013899U;
int var_11 = 642245475;
unsigned int var_12 = 3149186423U;
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
