#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1790560083;
long long int var_6 = 7877609703875362998LL;
unsigned int var_7 = 1481686237U;
signed char var_9 = (signed char)-58;
int zero = 0;
int var_10 = -1920411836;
unsigned short var_11 = (unsigned short)36928;
unsigned long long int var_12 = 8492835890069877075ULL;
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
