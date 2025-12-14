#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2029903101184447776LL;
int var_4 = 1989705230;
unsigned int var_5 = 1820088801U;
unsigned long long int var_8 = 3180761707642824579ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)60;
int var_11 = -1751984576;
unsigned long long int var_12 = 6877912601778736212ULL;
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
