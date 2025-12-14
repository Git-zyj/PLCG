#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3839632310008235352LL;
unsigned char var_2 = (unsigned char)240;
unsigned short var_6 = (unsigned short)15296;
unsigned long long int var_9 = 10071087968438664960ULL;
int zero = 0;
int var_10 = -1025255177;
signed char var_11 = (signed char)28;
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
