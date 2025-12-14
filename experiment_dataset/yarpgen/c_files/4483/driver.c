#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3971305885U;
unsigned char var_7 = (unsigned char)154;
unsigned char var_8 = (unsigned char)230;
unsigned char var_9 = (unsigned char)87;
int zero = 0;
signed char var_10 = (signed char)-83;
unsigned short var_11 = (unsigned short)35840;
unsigned int var_12 = 470633314U;
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
