#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2790378250522349469LL;
unsigned long long int var_2 = 13471704937619193106ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)37361;
short var_11 = (short)-11863;
unsigned char var_12 = (unsigned char)113;
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
