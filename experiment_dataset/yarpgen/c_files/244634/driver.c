#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10286;
int var_4 = 801157920;
int var_9 = -467022170;
unsigned char var_10 = (unsigned char)186;
int var_13 = 419817663;
int zero = 0;
long long int var_15 = -1075279707773524522LL;
int var_16 = -393276524;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
