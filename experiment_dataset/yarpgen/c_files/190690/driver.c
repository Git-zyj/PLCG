#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7397721541275741320ULL;
unsigned long long int var_5 = 15222031032987017976ULL;
unsigned short var_9 = (unsigned short)37371;
int zero = 0;
unsigned long long int var_16 = 8945518349310970783ULL;
signed char var_17 = (signed char)106;
unsigned short var_18 = (unsigned short)44818;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
