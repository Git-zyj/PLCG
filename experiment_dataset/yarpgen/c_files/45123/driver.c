#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17530822156624592917ULL;
unsigned short var_3 = (unsigned short)2246;
unsigned long long int var_4 = 13413373669747236990ULL;
unsigned int var_5 = 253390607U;
unsigned short var_7 = (unsigned short)29451;
unsigned int var_13 = 3753823568U;
int zero = 0;
unsigned int var_20 = 433764644U;
unsigned long long int var_21 = 5949771601832519993ULL;
unsigned long long int var_22 = 15258951809687007108ULL;
signed char var_23 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
