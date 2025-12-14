#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2527508720U;
long long int var_2 = 158546731814035228LL;
int var_7 = -1147216856;
unsigned short var_9 = (unsigned short)54791;
int zero = 0;
short var_10 = (short)-24762;
unsigned short var_11 = (unsigned short)43192;
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
