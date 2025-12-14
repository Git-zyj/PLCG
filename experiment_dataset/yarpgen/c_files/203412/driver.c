#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)150;
long long int var_5 = -5590279451224136787LL;
unsigned char var_6 = (unsigned char)15;
unsigned long long int var_9 = 620229805228233457ULL;
unsigned char var_11 = (unsigned char)133;
unsigned long long int var_15 = 7948323973709462188ULL;
int zero = 0;
short var_19 = (short)-21420;
unsigned long long int var_20 = 9297928762171938751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
