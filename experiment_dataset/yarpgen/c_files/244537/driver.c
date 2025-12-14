#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4804366905255828227LL;
unsigned long long int var_1 = 3489223724998694164ULL;
unsigned int var_2 = 2085869253U;
int var_4 = -653066528;
unsigned int var_6 = 2355020442U;
unsigned long long int var_8 = 6982131872614774833ULL;
unsigned long long int var_9 = 8351644118054454129ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)33825;
unsigned char var_13 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
