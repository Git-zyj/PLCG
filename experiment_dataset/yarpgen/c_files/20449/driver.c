#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned int var_3 = 3831973242U;
unsigned char var_4 = (unsigned char)120;
int var_5 = -969997490;
unsigned int var_6 = 42436676U;
unsigned short var_9 = (unsigned short)50498;
int zero = 0;
unsigned short var_10 = (unsigned short)8147;
unsigned short var_11 = (unsigned short)25707;
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
