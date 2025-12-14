#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16321948464761798731ULL;
unsigned char var_4 = (unsigned char)24;
short var_6 = (short)12675;
unsigned long long int var_9 = 10376001541416503010ULL;
signed char var_12 = (signed char)121;
unsigned long long int var_15 = 6513445766754264656ULL;
unsigned long long int var_17 = 17147078537417237632ULL;
unsigned long long int var_18 = 7565592672593992539ULL;
int zero = 0;
short var_20 = (short)6057;
short var_21 = (short)-5844;
unsigned long long int var_22 = 3462278144889506184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
