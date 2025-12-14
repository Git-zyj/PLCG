#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3416;
unsigned int var_3 = 4068363067U;
unsigned long long int var_4 = 11911678821890421948ULL;
unsigned long long int var_6 = 923014940340491377ULL;
unsigned char var_9 = (unsigned char)86;
int zero = 0;
unsigned int var_10 = 1015536U;
unsigned int var_11 = 3413091664U;
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
