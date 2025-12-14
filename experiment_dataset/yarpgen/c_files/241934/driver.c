#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1664760765;
unsigned long long int var_7 = 5891671993824108467ULL;
unsigned long long int var_11 = 13006070545955627630ULL;
int zero = 0;
unsigned long long int var_13 = 13524913047236903060ULL;
long long int var_14 = 7146988689033677121LL;
unsigned int var_15 = 1809213744U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
