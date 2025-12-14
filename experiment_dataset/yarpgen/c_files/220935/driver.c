#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)162;
int var_3 = -697353136;
int var_4 = -710473717;
int var_5 = 1846240265;
unsigned long long int var_7 = 5392717980177507769ULL;
int zero = 0;
unsigned long long int var_10 = 7234712410278971070ULL;
unsigned long long int var_11 = 3982589308213839439ULL;
int var_12 = -1628842719;
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
