#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3025204593223619249ULL;
int var_2 = 795765324;
unsigned char var_3 = (unsigned char)3;
int var_5 = 820322035;
unsigned long long int var_6 = 8784411554767957267ULL;
unsigned char var_7 = (unsigned char)230;
int zero = 0;
unsigned long long int var_10 = 4751508685338000410ULL;
int var_11 = 795487961;
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
