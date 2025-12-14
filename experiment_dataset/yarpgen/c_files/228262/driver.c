#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7423174113876144463LL;
unsigned int var_3 = 2073952153U;
int var_4 = -516209686;
unsigned char var_5 = (unsigned char)26;
long long int var_6 = -8242165154603386498LL;
long long int var_7 = 9150637148383020692LL;
long long int var_8 = 6202743247078836783LL;
int var_9 = 1360632807;
int zero = 0;
unsigned char var_10 = (unsigned char)28;
unsigned short var_11 = (unsigned short)696;
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
