#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -991027589;
unsigned char var_3 = (unsigned char)212;
unsigned char var_4 = (unsigned char)149;
unsigned char var_7 = (unsigned char)40;
int var_8 = 948572369;
unsigned long long int var_9 = 10959091134362842259ULL;
unsigned long long int var_14 = 15692175111503130953ULL;
int var_15 = 620493766;
int zero = 0;
unsigned long long int var_16 = 4729706934116064929ULL;
unsigned long long int var_17 = 5207783436444931526ULL;
unsigned long long int var_18 = 16070608226648953805ULL;
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
