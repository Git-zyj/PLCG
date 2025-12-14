#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)115;
long long int var_6 = -1932989868945375193LL;
unsigned int var_7 = 3849151812U;
int zero = 0;
int var_17 = -780179595;
unsigned int var_18 = 1486894200U;
unsigned long long int var_19 = 7053154410419948714ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
