#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
long long int var_9 = 7337033198448729486LL;
int var_13 = 590741591;
unsigned long long int var_18 = 4243905763429005462ULL;
int zero = 0;
long long int var_20 = 7206434623654014077LL;
long long int var_21 = -8949577246839600692LL;
long long int var_22 = 2780337157097440577LL;
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
