#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
signed char var_1 = (signed char)-123;
int var_2 = -594332203;
unsigned int var_5 = 4056914602U;
short var_7 = (short)1576;
int zero = 0;
int var_10 = -750729787;
long long int var_11 = 6407514506278788228LL;
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
