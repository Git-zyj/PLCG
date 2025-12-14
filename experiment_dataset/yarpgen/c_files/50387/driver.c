#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5319354179964342036LL;
short var_3 = (short)2399;
signed char var_4 = (signed char)70;
int var_5 = 440020272;
short var_8 = (short)-29944;
long long int var_9 = 7899994608711672776LL;
unsigned long long int var_11 = 7632863421159240373ULL;
int zero = 0;
int var_12 = 1969794989;
unsigned long long int var_13 = 12557427059256832355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
