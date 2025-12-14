#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2168833712U;
unsigned short var_4 = (unsigned short)51179;
int var_6 = -996855425;
unsigned char var_7 = (unsigned char)59;
signed char var_10 = (signed char)-45;
unsigned long long int var_11 = 11205999763181069446ULL;
int zero = 0;
unsigned long long int var_13 = 14482018655819339585ULL;
unsigned int var_14 = 4006485249U;
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
