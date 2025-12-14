#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29886;
signed char var_1 = (signed char)5;
long long int var_3 = -6850122872640221038LL;
signed char var_4 = (signed char)-85;
unsigned char var_7 = (unsigned char)37;
long long int var_9 = 3598981113421847176LL;
int zero = 0;
unsigned short var_13 = (unsigned short)61438;
unsigned long long int var_14 = 14631214445822122356ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
