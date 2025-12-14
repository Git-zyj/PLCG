#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1027754216U;
unsigned int var_9 = 1983569481U;
long long int var_12 = 13059270789898081LL;
unsigned long long int var_14 = 9347840624390641717ULL;
unsigned long long int var_15 = 11874492479868545585ULL;
int zero = 0;
long long int var_18 = -491831884931199382LL;
long long int var_19 = -6291698993939517486LL;
unsigned int var_20 = 259515303U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
