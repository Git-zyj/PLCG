#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5364902562970090776ULL;
int var_1 = 1760467285;
short var_3 = (short)-21926;
long long int var_5 = -6916420489921111513LL;
int var_9 = 99517895;
unsigned long long int var_11 = 17046455923050541471ULL;
int zero = 0;
long long int var_12 = 8077902270672344634LL;
signed char var_13 = (signed char)-49;
signed char var_14 = (signed char)87;
unsigned long long int var_15 = 8869102246688605800ULL;
unsigned char var_16 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
